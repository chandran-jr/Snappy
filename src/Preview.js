import React, { useEffect } from 'react';
import { useDispatch, useSelector } from 'react-redux';
import { useHistory } from 'react-router-dom';
import { resetCameraImage, selectCameraImage } from './features/cameraSlice';
import CloseIcon from '@material-ui/icons/Close';
import TextFieldsIcon from '@material-ui/icons/TextFields';
import CreateIcon from '@material-ui/icons/Create';
import NoteIcon from '@material-ui/icons/Note';
import MusicNoteIcon from '@material-ui/icons/MusicNote';
import AttachFileIcon from '@material-ui/icons/AttachFile';
import CropIcon from '@material-ui/icons/Crop';
import TimerIcon from '@material-ui/icons/Timer';
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

         <div className="preview__toolbarRight">   
         <TextFieldsIcon/>
            <CreateIcon/>
            <NoteIcon/>
            <MusicNoteIcon/>
            <AttachFileIcon/>
            <CropIcon/>
            <TimerIcon/>
         </div>

            <img src={cameraImage} alt=""/>
        </div>
    );
}

export default Preview
