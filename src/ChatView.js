import React, { useEffect } from 'react';
import { useSelector } from 'react-redux';
import {useHistory} from 'react-router-dom';
import './chatview.css';
import { selectSelectedImage } from './features/appSlice';

function ChatView() {

    const selectedImage = useSelector(selectSelectedImage);
    const history = useHistory();

    useEffect(() =>{
        if(!selectedImage){
            exit();
        }
    })

    const exit = () => {
        history.replace('/chats');
    }

    return (
        <div className="chatview">
            <img src={selectedImage} onClick={exit} alt="" />
        </div>
    )
}

export default ChatView
