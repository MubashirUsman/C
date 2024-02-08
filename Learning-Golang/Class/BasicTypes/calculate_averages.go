package main

import (
	"fmt"
	"os"
)

// if you want to use default initilization then you may use var keyword
// to make fmt.Fscanf put value in val, we have to pass the address of val

func main(){
	var sum float64
	var n int

	for {	//infinite loop
		var val float64

		_, err := fmt.Fscanln(os.Stdin, &val)	//scan for the line of text (here type float64) ending with newline.
		// fmt.Fscanln expects an address of a variable where it can store the value that it reads.
		if err != nil{
			
			break
		}
		sum += val
		n++
	}
	// what if there are no numbers
	if n == 0 {
		fmt.Fprintln(os.Stderr, "no values")	//tells which output stream to print to
		os.Exit(-1)
	}

	fmt.Println("The average is ", sum/float64(n))
}