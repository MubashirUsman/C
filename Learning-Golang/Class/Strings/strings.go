package main

import (
	"fmt"
	"strings"
)
// byte: a synonym for uint8
// rune: a synonym for int32 for characters
// string: logically a sequence of runes, physically a sequence of bytes
// raw strings use `` quotes

func main(){
	s := "élite"
	fmt.Printf("%8T %[1]v\n", s)
	fmt.Printf("%8T %[1]v\n", []rune(s))	//cast string to rune, and its a sequence of 32 bit int
	fmt.Printf("%8T %4d\n", s, len(s))// len of string is number of bytes to represent it in utf8, that's why its 6
	// len of str is num. of bytes to represent unicode chars and not the num. of unicode chars
	chineese := "学中文"
	fmt.Println("len of chineese string ",len(chineese))	// 9
	// len of str is stored in the str descriptor
	// The internal reprsentation of str is a pointer and the len
	// str are immutable and can share the underlying memory
	var mystr string = "Hello, World"
	hello := mystr[:4]	//Here hello points to same address as mystr points, if mystr changes so will hello
	fmt.Printf("Upto 4 chars, %v\n", hello) 
	// mystr[0] = 'A' 	//Not allowed to do this
	// t := mystr	//t is a different descriptor than mystr but points to same memory

	newstr := "Bye" + mystr[5:]		//A new descriptor
	fmt.Println(newstr)

	mystr += "s"	//get new bigger memory, copy the mystr to a new memory and add s at the end, this does not change old str

	//strings
	var str string = "a quick monkey"
	str = strings.ToUpper(str)	//s will point to a new location
	fmt.Println(str)
}