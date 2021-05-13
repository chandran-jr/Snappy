import React, { useCallback, useRef} from 'react';
import Webcam from 'react-webcam';
import RadioButtonUncheckedIcon from '@material-ui/icons/RadioButtonUnchecked';
import {  useDispatch } from 'react-redux';
import { setCameraImage } from './features/cameraSlice';
import { useHistory } from 'react-router-dom';
import './webcamCapture.css';



const VideoConstraints = {
    width: 250,
    height: 400,
    facingMode: 'user',
};

function WebcamCapture() {

    const WebcamRef = useRef(null);
    const dispatch = useDispatch();
    const history = useHistory();

    const capture = useCallback(() => {
            const imageSrc = WebcamRef.current.getScreenshot();

            dispatch(setCameraImage(imageSrc));
            history.push("/preview")
            

    },[dispatch,WebcamRef,history])

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
