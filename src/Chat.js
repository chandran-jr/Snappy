import { Avatar } from '@material-ui/core';
import StopIcon from '@material-ui/icons/Stop';
import React from 'react';
import ReactTimeago from 'react-timeago';
import './Chat.css';

function Chat({id,timestamp,username, profilePic, read, imageUrl}) {
    return (
        <div className="chat">
            <Avatar src={profilePic} />
            <div className="chat__info">
                <h4>Username</h4>
                <p>Tap to view ~ <ReactTimeago date = {new Date(timestamp?.toDate()).toUTCString()} /> </p>
            </div>
            {!read && <StopIcon className="chat__stopicon"/>}
        </div>
    )
}

export default Chat
