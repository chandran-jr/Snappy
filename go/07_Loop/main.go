package main

import "fmt"

func main() {
	// 1st for loop
	i := 1
	for i <= 10 {
		fmt.Println(i)
		// i = i + 1
		i++
	}

	// 2nd for loop
	for i := 1; i <= 10; i++ {
		fmt.Printf("Angka %d\n", i)
	}

	// fizzbuzz
	for i := 1; i <= 20; i++ {
		if i%15 == 0 {
			fmt.Println("FizzBuzz")
		} else if i%5 == 0 {
			fmt.Println("Buzz")
		} else if i%3 == 0 {
			fmt.Println("Fizz")
		} else {
			fmt.Println(i)
		}
	}
}
