package main //the program is going to be the part of some package

import (
	"fmt"
	"math/rand" //sub-package is imported with slash: math/rand
)


func main(){	//program starts execution from main
	fmt.Println("Generate a random number", rand.Intn(99))
}