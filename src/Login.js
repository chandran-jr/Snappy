import { Button } from '@material-ui/core';
import React from 'react';
import './Login.css';

function Login() {


    const signIn = () => {

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
