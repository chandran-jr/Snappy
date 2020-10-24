package main

import "fmt"

func main() {
	ids := []int{2, 4, 6, 8, 10}
	for i, id := range ids {
		fmt.Printf("index: %d - ID: %d\n", i, id)
	}
	// without index
	for _, id := range ids {
		fmt.Printf("ID: %d\n", id)
	}

	// add ids
	total := 0
	for _, id := range ids {
		total += id
	}
	fmt.Println("Total =", total)

	// range on map
	mobil := map[string]string{"Andi": "Alphard", "Budi": "Brio"}
	for key, value := range mobil {
		fmt.Printf("%s: %s\n", key, value)
	}

	for k := range mobil {
		fmt.Println("Nama: " + k)
	}
}
