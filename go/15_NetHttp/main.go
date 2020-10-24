package main

import (
	"fmt"
	"net/http"
)

// index route
func index(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "<h1>Hello World!</h1>")
}

// about route
func about(w http.ResponseWriter, r *http.Request) {
	fmt.Fprintf(w, "<b><i>About page</i></h1>")
}

func main() {
	http.HandleFunc("/", index)
	http.HandleFunc("/about", about)

	fmt.Println("Server is running on port 3000...")
	http.ListenAndServe(":3000", nil)
}

// run & open localhost:3000
// try to go to localhost:3000/about
