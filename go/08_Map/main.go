package main

import "fmt"

func main() {
	// declare map
	data := make(map[string]string)
	// assign key-value
	data["Andi"] = "andi@andi.id"
	data["Budi"] = "budi@budi.com"
	data["Caca"] = "caca@cici.org"

	fmt.Println(data)
	fmt.Println(len(data))
	fmt.Println(data["Andi"])

	// delete a data
	delete(data, "Caca")
	fmt.Println(data)

	// declare + assign key-value
	mobil := map[string]string{"Andi": "Alphard", "Budi": "Brio"}
	fmt.Println(mobil)
	fmt.Println(len(mobil))
}
