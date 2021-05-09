import React from 'react';
import Webcam from 'react-webcam';


const videoConstraints = {
    width: 250,
    height: 400,
    facingMode: 'user',
};

function WebcamCapture() {
    return (
        <div className="webcamCapture">
            <Webcam/>
        </div>
    )
}

export default WebcamCapture
