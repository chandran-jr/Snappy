import { Avatar } from '@material-ui/core';
import SearchIcon from '@material-ui/icons/Search';
import ChatBubbleIcon from '@material-ui/icons/ChatBubble';
import React, { useEffect, useState } from 'react';
import {db} from './firebase';
import './Chats.css';

function Chats() {

    const [posts,setPosts] = useState([]);

    useEffect(() => {
        db.collection('posts').orderBy('timestamp', 'desc').onSnapshot(
            (snapshot) => 
                setPosts(snapshot.docs.map((doc) => ({
                    id:doc.id,
                    data: doc.data()
                })
        )))
    },[])

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
            <div className="chats__posts">
                
            </div>
        </div>
    )
}

export default Chats
