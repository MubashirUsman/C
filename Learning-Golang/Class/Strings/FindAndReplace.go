package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
)

func main() {
	if len(os.Args) < 3 {
		fmt.Fprintln(os.Stderr, "no enough args")
		os.Exit(-1)
	}
	old, new := os.Args[1], os.Args[2]	//take 2 cmd line arguments

	scan := bufio.NewScanner(os.Stdin)	//scanner to read from stdin

	for scan.Scan() {	//reads line from stdin and returns true 
		s := strings.Split(scan.Text(), old)	//result of splitted string is assigned to s, scan.Text retreives a line
		t := strings.Join(s, new)

		fmt.Println(t)
	}
}
