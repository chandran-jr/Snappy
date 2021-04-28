import firebase from 'firebase';


const firebaseConfig = {
    apiKey: "AIzaSyA3aafoOMA22_8l9si_utqzAH9cY6K0iPA",
    authDomain: "snappy-2152b.firebaseapp.com",
    projectId: "snappy-2152b",
    storageBucket: "snappy-2152b.appspot.com",
    messagingSenderId: "219406518478",
    appId: "1:219406518478:web:7945acb73c5c8f2aa5e89f"
  };

  const firebaseApp = firebase.initializeApp(firebaseConfig);

  const db = firebaseApp.firestore();

  const auth = firebase.auth();

  const storage = firebase.storage();

  const provider = new firebase.auth.GoogleAuthProvider();

  export {db, auth, storage, provider};