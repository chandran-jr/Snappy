import React from 'react';
import './App.css';
import WebcamCapture from './WebcamCapture';
import {
  BrowserRouter as Router,
  Switch,
  Route,
} from "react-router-dom";
import Preview from './Preview';
import Chats from './Chats';
import ChatView from './ChatView';

function App() {
  return (
    <div className="app">
<Router>
      <div className="app__body">
        <Switch>
          <Route exact path="/">
          <WebcamCapture/>
          </Route>
          <Route exact path="/chats">
          <Chats/>
          </Route>
          <Route exact path="/chats/view">
          <ChatView/>
          </Route>
          <Route path="/preview">
          <Preview/>
          </Route>
        </Switch>
      </div>
    </Router>
    </div>
  );
}

export default App;
