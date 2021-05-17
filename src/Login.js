import { Button } from '@material-ui/core';
import React from 'react';
import { useDispatch } from 'react-redux';
import { login } from './features/appSlice';
import { auth, provider } from './firebase';
import './Login.css';

function Login() {

    const dispatch = useDispatch();


    const signIn = () => {
        auth.signInWithPopup(provider)
        .then((result) => {
            dispatch(login({
                username: result.user.displayName,
                profilePic : result.user.photoUrl,
                id: result.user.uid,
            }))
        }).catch((error) => {alert(error.message)})
    }

    return (
        <div className="login">

        <div className="login__container">
        <h2>Snappy</h2>
        <img src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcSlLapujKfVQ8gZsoPZBLVK2sxuCampXG9VtQ&usqp=CAU" alt="" />
        <Button variant="outlined" onClick={signIn}>Sign In</Button>
        
        </div>
        </div>
    )
}

export default Login
