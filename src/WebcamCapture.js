import React, { useRef } from 'react';
import Webcam from 'react-webcam';


const VideoConstraints = {
    width: 250,
    height: 400,
    facingMode: 'user',
};

function WebcamCapture() {

    const webcamRef = useRef(null)

    return (
        <div className="webcamCapture">
            <Webcam
                audio = {false}
                height = {VideoConstraints.height}
                ref = {webcamRef}
                screenshotFormat = "image/jpeg"
                width = {VideoConstraints.width}

            />
        </div>
    )
}

export default WebcamCapture
