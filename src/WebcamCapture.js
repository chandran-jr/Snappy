import React, { useCallback, useRef, useState } from 'react';
import Webcam from 'react-webcam';
import RadioButtonUncheckedIcon from '@material-ui/icons/RadioButtonUnchecked';


const VideoConstraints = {
    width: 250,
    height: 400,
    facingMode: 'user',
};

function WebcamCapture() {

    const WebcamRef = useRef(null);

    const capture = useCallback(() => {
            const imgsrc = WebcamRef.current.getScreenshot();
            
    }, [WebcamRef])

    return (
        <div className="webcamCapture">
            <Webcam
                audio = {false}
                height = {VideoConstraints.height}
                ref = {WebcamRef}
                screenshotFormat = "image/jpeg"
                width = {VideoConstraints.width}
                videoConstraints = {VideoConstraints}

            />


        <RadioButtonUncheckedIcon

            className="webcamCapture__button"
            onClick={capture}
            fontSize = "large"
        />

        </div>
    )
}

export default WebcamCapture
