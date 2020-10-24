package main

import (
	"fmt"
	"strconv"
)

// var outside main func, cannot be shorthand
var outName = "Tsubasa"

func main() {

	// var
	var nama1 string = "Lintang"
	var nama2 = "Wisesa"
	var usia1 int = 28
	usia1 = 27
	// var usia2 = 28	// var must be used! if not, just delete it!
	var lulus = true

	// const
	const massa = 12.34

	// shorthand
	klub := "Barcelona"
	size := 98.76
	phone, email := "+628886719327", "lintang@wisesa.id"

	// print
	fmt.Println(nama1)
	fmt.Println(nama2)
	fmt.Println(nama1, usia1)
	fmt.Println(outName)
	fmt.Println(klub)
	fmt.Println(size)
	fmt.Println(phone)
	fmt.Println(email)

	// check data type
	fmt.Printf("%T\n", nama1)
	fmt.Printf("%T\n", usia1)
	fmt.Printf("%T\n", lulus)
	fmt.Printf("%T\n", massa)
	fmt.Printf("%T\n", size)

	// print int as str
	fmt.Printf(nama1 + strconv.Itoa(usia1))
}
