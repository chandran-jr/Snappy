package main

import (
	"fmt"
	"strconv"
)

// 1. declare a person struct
// BEST TIPS: nama struct lowercase, nama attributenya uppercase!
type person struct {
	FirstName string
	LastName  string
	City      string
	Gender    string
	Age       int
}

// 2. Hello method (value receiver)
func (x person) hello() string {
	return "Hello, " + x.FirstName + " " + x.LastName + " " + strconv.Itoa(x.Age) + "th"
}

// 3. has birthday method (pointer receiver)
// param pointer receiver should be same as before: x
func (x *person) hasBirthday() {
	x.Age++
}

func main() {
	// 1. call struct
	personA := person{FirstName: "Andi", LastName: "Wijaya", City: "Jakarta", Gender: "Pria", Age: 28}
	fmt.Println(personA)
	fmt.Println(personA.Age)

	personB := person{"Budi", "Susilo", "Bandung", "Pria", 27}
	fmt.Println(personB)
	fmt.Println(personB.City)

	// 2. call hello method
	fmt.Println(personA.hello())

	// 3. call hasBirthday method
	personA.hasBirthday()
	personA.hasBirthday()
	fmt.Println(personA.hello())
}
