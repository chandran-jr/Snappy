package main

import "fmt"

// basic function
func hai() {
	fmt.Println("Hai!")
}

// return function => func FuncName(param) resultType {program return}
func halo(nama string) string {
	return "Halo " + nama
}

// func jumlah(x int, y int) int {
func jumlah(x, y int) int {
	return x + y
}

func main() {
	hai()
	fmt.Println(halo("Lintang"))
	fmt.Println(jumlah(2, 6))
}
