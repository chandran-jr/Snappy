package main

import "fmt"

func main() {
	a := 5
	b := &a // assign b to pointer a

	// 5 0xc0000140b0 : b is a's memory address
	fmt.Println(a, b)

	fmt.Printf("%T\n", b)

	// get b value
	fmt.Println(*b)
	fmt.Println(*&a)

	// change val with pointer
	*b = 12
	fmt.Println(a)
	fmt.Println(*b)
}
