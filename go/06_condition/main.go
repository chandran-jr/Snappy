package main

import "fmt"

func main() {

	// if else
	x := 2
	y := 3
	if x < y {
		fmt.Printf("%d kurang dari %d\n", x, y)
	} else {
		fmt.Printf("%d lebih dari %d\n", x, y)
	}

	// else if
	mobil := "Pajero"
	if mobil == "Pajero" {
		fmt.Println("Mobil ini = Pajero")
	} else if mobil == "Fortuner" {
		fmt.Println("Mobil ini = Fortuner")
	} else {
		fmt.Println("Mobil ini bukan Fortuner & Pajero")
	}

	// switch
	warna := "biru"
	switch warna {
	case "merah":
		fmt.Println("Warna merah")
	case "biru":
		fmt.Println("Warna biru")
	default:
		fmt.Println("Bukan merah atau biru")
	}

	// and && / or ||
	a := 2
	b := 6
	if a%2 == 0 && b%2 == 0 {
		fmt.Println("a & b keduanya angka GENAP")
	} else if a%2 != 0 && b%2 != 0 {
		fmt.Println("a & b keduanya angka GANJIL")
	} else {
		fmt.Println("a & b berbeda")
	}
}
