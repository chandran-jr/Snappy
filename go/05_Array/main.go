package main

import "fmt"

func main() {
	// declare array
	var buah [2]string
	// assign array
	buah[0] = "Apel"
	buah[1] = "Belimbing"
	fmt.Println(buah)
	fmt.Println(buah[1])

	// declare + assign
	mobil := [2]string{"Avanza", "Brio"}
	fmt.Println(mobil)
	fmt.Println(mobil[1])

	// =======================================
	pets := []string{"Kucing", "Kakatua", "Kuda"}
	fmt.Println(pets)
	fmt.Println(len(pets))
	fmt.Println(pets[1:2])
}
