#include <stdio.h>

void increment(int *a){
    *a = *a +1;
}

int main(void)
{
    // Pointers are strongly typed. int* p; int a; &a will return a pointer, *p=value at address p
    // *p will read the value at complete memory allocated to the type of pointer p.
    // for int*, machine will look at value of 4 bytes, for char* it will look at 1 byte
    // adding/subtracting some constant integer is allowed on pointers, *(p+1) will take as many bytes as var type is.
    int x = 10;
    int* intPointer = &x;
    char* charPointer = (char*)intPointer;
    
    printf("%d is stored at %d and next address from x is %d\n", x, intPointer, (intPointer+1));
    printf("The address %d ", charPointer);
    increment(&x);
    printf("\nincremented value of x = %d", x);
}
