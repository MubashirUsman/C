#include <stdio.h>
#include <stdlib.h>


int main(){
    int sizeOfArray;
    printf("enter the size of array: ");
    scanf("%d\n", &sizeOfArray);
    int* ptr = (int*)malloc(sizeOfArray*sizeof(int));
    
    for (int i =0; i<sizeOfArray; i++){
        printf("enter the %d element of array: ", i);
        scanf("%d", &(ptr[i]));
        printf("\n");
    }   
    free(ptr);
    return 0;
}