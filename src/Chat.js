import { Avatar } from '@material-ui/core';
import React from 'react';
import './Chat.css';

function Chat({id,timestamp,username, profilePic, read, imageUrl}) {
    return (
        <div className="chat">
            <Avatar src={profilePic} />
            <div className="chat__info">
                <h4>Username</h4>
                <p>Tap to view ~ {new Date(timestamp?.toDate()).toUTCString()} </p>
            </div>
        </div>
    )
}

export default Chat
