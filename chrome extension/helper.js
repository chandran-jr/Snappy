var Helper = (function ($) {
	'use strict';

	/**
	 * Sets image src attribute from its data-src
	 * @param object
	 */
	function imgReplace(imgEl) {
		if (!imgEl) {
			return;
		}

		if (imgEl.length) {
			$.each(imgEl, function () {
				$(this).attr('src', $(this).data('src'));
			});
		}		
	}

	/**
	 * Checks and iterates through array and returns callback with each item
	 * @param array containing items ex.: ['item1', 'item2', 'item3']
	 * @param callback function that returns each item
	 */
	function forEach(array, callback) {
		if (typeof array[0] === 'undefined' ||
			!array.length ||
			!callback) { return; }

		var i = 0;

		for (i = 0; i < array.length; i += 1) {
			callback(array[i], i);
		}
	}

	/**
	 * Loops through object elements and returns a callback with object item
	 * @param obj object containing items ex.: { item1: 'item1-value', item2: 'item2-value' }
	 * @param callback function that returns each item
	 */
	function loop(obj, callback) {
		var key;

		for (key in obj) {
			if (obj.hasOwnProperty(key)) {
				callback(obj[key], key);
			}
		}
	}

	/**
	 * Binds data to string
	 * @param str string in which data which will be replaced is marked placed within '{}' brackets
	 * @param data object which keys are directly mapped in the string 
	 *
	 * @description
	 * data: { key: value }
	 * str:  'Example string with {key}' -> Example string with value
	 * Default values can be set to variables like so: {{key="1"}}
	 * If the variable isn't replaced then it will fallback to its default value
	 */
	function bind(str, data) {
		if (!str || str === '' || typeof data !== 'object') { return; }

		loop(data, function (item, key) {
		  str = str.replace('{' + key + '}', item);

		  // Array
		  if (item instanceof Array) {

		    var re = new RegExp('{#each (.*?) from ' + key + '}([\\s\\S]*?){\/each}');
		    
		    if (re.test(str)) {
		      var newEl = '',
		        newElMatch = str.match(re);

		      forEach(item, function (subItem, i) {
		        var newElLabel = newElMatch[1] || '',
		          copyEl = str.match(re)[2] || '';

		        copyEl = copyEl.replace('{' + newElLabel + '}', subItem);
		        copyEl = copyEl.replace(/{#index}/, i);
		        newEl += copyEl;
		      });

		      str = str.replace(re, newEl);
		    }

		  }

		  var re = new RegExp('{{' + key + '=.*?}}');

		  if (re.test(str)) {
		    str = str.replace(re, item);
		  }
		});

		// if default value is set
		var matched = str.match(/{{(.*?)}}/g);
		if (matched !== null && matched.length) {
		  forEach(matched, function (match) {
		    var singleMatch = match.replace(/[{{||}}]/g, '').split('='),
		      key = singleMatch[0],
		      value = singleMatch[1].replace(/"/g, '');

		    str = str.replace(match, value);
		  });
		}

		return str;
	}

	return {
		bind: bind,
		imgReplace: imgReplace
	};

}(jQuery));