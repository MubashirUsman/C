package main

import "fmt"

func main(){
	// int, float64

	var a int = 10
	b := 10.02	//same as: var b float64 = 10.02
	fmt.Printf("type of a %T and its value %5v \n", a, a) //add 5 spaces before v
	fmt.Printf("type of b %T and its value %[1]v \n", b) //use for v whatever the [1] argument was, [0] is Printf
	a = int(b)	//typecast b

	// bool
	c := false
	fmt.Printf("%T c is %[1]v\n", c)

	// error: special type with Error() func
	// an error maybe nil or non-nil
	// if non-nil, then error message can be printed out

	// pointer: can be nil or non-nil
	// no pointer manipulation except through package "unsafe"

	// Initialization
	// all variables are initialized to zero by default
	// bool gets false, strings get "", int/float get 0, 
	// pointers/maps/slices/channels get nil
	// For aggregate types, all types get their "zero" values

	// Constants: can only be made from numbers/bools/strings
	// const is immutable
	const d = 1
	const s = "a string"
	fmt.Println("The len of string s is ", len(s))


}