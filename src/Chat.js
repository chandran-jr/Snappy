import { Avatar } from '@material-ui/core';
import StopIcon from '@material-ui/icons/Stop';
import React from 'react';
import ReactTimeago from 'react-timeago';
import './Chat.css';
import {db} from './firebase';
import {useDispatch} from 'react-redux';
import {useHistory} from 'react-router-dom';
import { selectImage } from './features/appSlice';

function Chat({id, username, timestamp, imageUrl, read,  profilePic,}) {

     const dispatch = useDispatch();
     const history = useHistory();

    const open = () => {
        if(!read) {
            dispatch(selectImage(imageUrl));
            db.collection('posts').doc(id).set({
                read : true
            }, {merge: true});

            history.push('/chats/view');
        }
    }
    
    return (
        <div onClick={open} className="chat">
            <Avatar src={profilePic} />
            <div className="chat__info">
                <h4>{username}</h4>
                <p>Tap to view ~ <ReactTimeago date = {new Date(timestamp?.toDate()).toUTCString()} /> </p>
            </div>
            {!read && <StopIcon className="chat__stopicon"/>}
        </div>
    )
}

export default Chat
