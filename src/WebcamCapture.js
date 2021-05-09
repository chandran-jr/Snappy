import React from 'react';
import Webcam from 'react-webcam';


const VideoConstraints = {
    width: 250,
    height: 400,
    facingMode: 'user',
};

function WebcamCapture() {
    return (
        <div className="webcamCapture">
            <Webcam
                audio = {false}
                height = {VideoConstraints.height}
                

            />
        </div>
    )
}

export default WebcamCapture
