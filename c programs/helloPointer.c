#include <stdio.h>

void increment(int *a){
    *a = *a +1; //de-referancing of pointer 
}

int main(void)
{
    int x = 10;
    int* intPointer = &x;
    char* charPointer = (char*)intPointer;
    
    printf("%d is stored at %d and next address from x is %d\n", x, intPointer, (intPointer+1));
    printf("The address %d ", charPointer);
    increment(&x);
    printf("\nincremented value of x = %d", x);
}
