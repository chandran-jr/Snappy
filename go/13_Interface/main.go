package main

import (
	"fmt"
	"math"
)

// interface
type shape interface {
	area() float64
}

// struct circle & rectangle
type circle struct {
	x, y, radius float64
}
type rectangle struct {
	width, height float64
}

func (c circle) area() float64 {
	return math.Pi * c.radius * c.radius
}
func (r rectangle) area() float64 {
	return r.width * r.height
}

func getArea(s shape) float64 {
	return s.area()
}

func main() {
	circle := circle{x: 0, y: 0, radius: 5}
	rectangle := rectangle{width: 10, height: 5}

	fmt.Printf("Circle area: %f\n", getArea(circle))
	fmt.Printf("Rectangle area: %f\n", getArea(rectangle))
}
