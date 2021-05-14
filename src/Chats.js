import { Avatar } from '@material-ui/core';
import SearchIcon from '@material-ui/icons/Search';
import ChatBubbleIcon from '@material-ui/icons/ChatBubble';
import React from 'react';
import './Chats.css';

function Chats() {
    return (
        <div className="chats">
            <div className="chats__header">
                <Avatar className="chats__avatar"/>
                <div className="chats__searchbar">
                    <SearchIcon className="chats__searchIcon" />
                    <input type="text" placeholder="Search" />
                </div>
                <ChatBubbleIcon className="chats__chatBubbleIcon" />
            </div>
        </div>
    )
}

export default Chats
