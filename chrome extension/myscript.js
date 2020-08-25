(function ($, window, h) {
  'use strict';

  var weatherAPI = 'http://api.openweathermap.org/data/2.5/weather?units={units}&q={location}&APPID=a9bacbc366ab9c6ca5519cc7e7a63bc3',
      forcastAPI = 'http://api.openweathermap.org/data/2.5/forecast?units={units}&q={location}&APPID=a9bacbc366ab9c6ca5519cc7e7a63bc3',
      iconStr = 'icons/weather/{icon}.png',
      search = '.micro-weather-knbgahoibccgfedbeamjlaipedimpfeh #search',
      settingsBtn = '.micro-weather-knbgahoibccgfedbeamjlaipedimpfeh .settings__link',
      settings = '.micro-weather-knbgahoibccgfedbeamjlaipedimpfeh .settings__area',
      unitsDeg = '.micro-weather-knbgahoibccgfedbeamjlaipedimpfeh .settings__units',
      canvasTemplate = '.micro-weather-knbgahoibccgfedbeamjlaipedimpfeh #canvas-template',
      canvas = '.micro-weather-knbgahoibccgfedbeamjlaipedimpfeh .y-chrome-ext-canvas',
      forcast = '.micro-weather-knbgahoibccgfedbeamjlaipedimpfeh .forcast-container',
      forcastTemplate = '.micro-weather-knbgahoibccgfedbeamjlaipedimpfeh #forcast-template',
      showForcastBtn = '.micro-weather-knbgahoibccgfedbeamjlaipedimpfeh .show-forcast',
      months = ['Jan', 'Feb', 'March', 'Apr', 'May', 'June', 'July', 'Aug', 'Sep', 'Oct', 'Nov', 'Dec'];

  function fetcher(url, success, error) {
    $.ajax({
      url:  url,
      type: 'POST',
      success: success,
      error: error
    });
  }

  /**
   * Fetches weather data from source
   * @param string search query
   */
  function fetchWeather(location) {    
    var unitsCheck = localStorage.units || $(unitsDeg).val() || 'metric',
        successHandler,
        errorHandler;

    errorHandler = function () {
      $(canvas).html('No city found. Please try again.');
      return;
    };

    successHandler = function (data) {
      if (!data || data.cod === '404') {
        errorHandler();
      }

      var temp = Math.ceil(data.main.temp).toString(),
          weatherIcon = h.bind(iconStr, { icon: data.weather[0].icon }),
          newCanvas,
          units = unitsCheck === 'metric' ? '&deg;C' : '&deg;F';

      chrome.browserAction.setBadgeText({ text: temp });
      chrome.browserAction.setIcon({ path: weatherIcon });
      
      newCanvas = h.bind($(canvasTemplate).html(), {
        icon: weatherIcon,
        name: data.name || 'N/A',
        description: data.weather[0].description || 'N/A',
        temp: data.main.temp + units,
        temp_max: data.main.temp_max + units,
        temp_min: data.main.temp_min + units,
        humidity: data.main.humidity || 'N/A',
        presure: data.main.presure || 'N/A'
      });

      $(canvas).html(newCanvas);

      h.imgReplace($(canvas).find('img'));
      localStorage.setItem('location', location);
    };

    fetcher(h.bind(weatherAPI, { units: unitsCheck, location: location }), successHandler, errorHandler);
  }

  /**
   * Fetches weather forcast for the next few days
   * @param string search query
   */
  function fetchForcast(location, fetch) {
    var unitsCheck = localStorage.units || $(unitsDeg).val() || 'metric',
        successHandler,
        errorHandler;

    errorHandler = function () {
      $(canvas).html('No city found. Please try again.');
      return;
    };

    successHandler = function (data) {
      var daysForcast = data.list,
          units = unitsCheck === 'metric' ? '&deg;C' : '&deg;F',
          forcastTemp = '',
          today = new Date().getDate(),
          dateObj = {};

      daysForcast.forEach(function (item) {
        var itemDate = new Date(item.dt_txt);

        if (itemDate.getDate() === today) {
          return;
        }

        if (!dateObj.hasOwnProperty(itemDate.getDate())) {
          dateObj[itemDate.getDate()] = [item];
        } else {
          dateObj[itemDate.getDate()].push(item);
        }
      });

      $.each(dateObj, function (key, singleDate) {
        var itemDate = new Date(singleDate[0].dt_txt);

        forcastTemp += h.bind('<div class="single-date__title">{singleDate}</div>', { singleDate: [itemDate.getDate(), ' ', months[itemDate.getMonth()]].join('') });
        forcastTemp += '<div class="single-date">';

        singleDate.forEach(function (item) {
          var itemDate = new Date(item.dt_txt);

          forcastTemp += h.bind($(forcastTemplate).html(), {
            icon: h.bind(iconStr, { icon: item.weather[0].icon }),
            temp: item.main.temp + units,
            temp_max: item.main.temp_max + units,
            temp_min: item.main.temp_min + units,
            time: [itemDate.getHours(), ':00'].join('')
          });

        });

        forcastTemp += '</div>';
      });

      $(forcast).html(forcastTemp);
      h.imgReplace($(forcast).find('img'));
      $('.single-date').slick({
        slidesToShow: 3,
        prevArrow: '<button type="button" data-role="none" class="slick-prev" aria-label="Previous" tabindex="0" role="button">&larr;</button>',
        nextArrow: '<button type="button" data-role="none" class="slick-next" aria-label="Next" tabindex="0" role="button">&rarr;</button>'
      });
    };

    fetcher(h.bind(forcastAPI, { units: unitsCheck, location: location }), successHandler, errorHandler);
  }

  /**
   * Handles key press on search
   * @param object containing weather data
   */
  function searchKeyUp(event) {
    if (event.keyCode !== 13) {
      return;
    }

    fetchWeather($(this).val());
    fetchForcast($(this).val());
  }

  function settingsClick() {
    $(settings).toggle();
  }

  function unitsChange() {
    var val = $(this).val();

    if (val === '') {
      return;
    }

    localStorage.units = val;
    fetchWeather(localStorage.getItem('location'));
    fetchForcast(localStorage.getItem('location'));
  }

  function showForcast() {
    if (localStorage.getItem('location')) {
      fetchWeather(localStorage.getItem('location'));
      fetchForcast(localStorage.getItem('location'));
    }
  }

  $(document).ready(function () {
    if (localStorage.getItem('location')) {
      fetchWeather(localStorage.getItem('location'));
      fetchForcast(localStorage.getItem('location'));
    }

    $(search).on('keyup', searchKeyUp);
    $(settingsBtn).on('click', settingsClick);
    $(unitsDeg).on('change', unitsChange);
  });

}(jQuery, window, Helper));
