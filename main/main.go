package main

import ( "fmt"; "math")

func main(){
	// declaring variables
	number := math.Pi/2	//declare and initialize: this format is allowed inside of functions only
	var anyString string = "Hello Go" // var for declaring variable
	fmt.Println(number, "\t", anyString)
	fmt.Println(math.Sin(float64(number))) //sin expects float64

	// for loop
	for i:= 0; i< 10; i++{
		if i % 2 == 0 {
			fmt.Println(i, "is even")
		}
		continue
	}

	// 
}