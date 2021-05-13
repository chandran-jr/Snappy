import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { useHistory } from 'react-router-dom';
import { resetCameraImage, selectCameraImage } from './features/cameraSlice';
import CloseIcon from '@material-ui/icons/Close';
import './preview.css';

function Preview() {

    const cameraImage = useSelector(selectCameraImage);
    const history = useHistory();
    const dispatch  = useDispatch();

    useEffect(() => {
        if(!cameraImage) {
            history.replace("/");
        }
    },[cameraImage, history]);

    const closePreview = () => {
        dispatch(resetCameraImage());
    }

    return (
        <div className="preview">
        <CloseIcon
         className="preview__close"
         onClick={closePreview}    
         />
            <img src={cameraImage} alt=""/>
        </div>
    );
}

export default Preview
