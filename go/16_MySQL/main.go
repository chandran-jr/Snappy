package main

import (
	"database/sql"
	"fmt"

	_ "github.com/go-sql-driver/mysql"
)

type Tag struct {
	id      int    `json:"id"`
	message string `json:"message"`
	time    string `json:"time"`
}

func main() {
	fmt.Println("Go & MySQL")

	// ==================================
	// connection
	// ==================================
	db, err := sql.Open("mysql", "lintang:12345@tcp(localhost:3306)/mqttjs")
	if err != nil {
		panic(err.Error())
	}
	defer db.Close()

	// ==================================
	// show all data
	// ==================================
	results, err := db.Query("SELECT * FROM mqttjs")
	if err != nil {
		panic(err.Error())
	}
	for results.Next() {
		var tag Tag
		err = results.Scan(&tag.id, &tag.message, &tag.time)
		if err != nil {
			panic(err.Error()) // proper error handling instead of panic in your app
		}
		fmt.Println(tag.id, tag.message, tag.time)
	}

	// ==================================
	// insert data
	// ==================================
	// insert, err := db.Query("INSERT INTO mqttjs (message) VALUES ('Test Go MySQL')")
	// if err != nil {
	// 	panic(err.Error())
	// }
	// defer insert.Close()

	// ==================================
	// update data
	// ==================================
	// update, err := db.Query("UPDATE mqttjs set message = 'Hi World!' where message = 'Hello World!'")
	// if err != nil {
	// 	panic(err.Error())
	// }
	// defer update.Close()

	// ==================================
	// delete data
	// ==================================
	// delete, err := db.Query("DELETE from mqttjs where message = 'Test Go MySQL'")
	// if err != nil {
	// 	panic(err.Error())
	// }
	// defer delete.Close()
}
