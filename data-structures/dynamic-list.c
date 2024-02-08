#include <stdio.h>
#include <stdlib.h>

int* double_list(int* array, size_t size){
    int* new_array = (int*)malloc(2*size*sizeof(int));
    for (size_t i = 0; i < (2*size); i++)
    {
        *(new_array + i) = *(array + i);
    }
    return new_array;
}

void show_elements(int* array, size_t size){
    for (int i = 0; i <= size; i++)
    {    
        printf("array Elements %d\n", *(array + i));
    }
}
int main(void){
    int A[] = {2,4,6};
    int sizeArray = sizeof(A)/sizeof(A[0]);
    printf("before size %d\n", sizeArray);
    int* ptrA = double_list(A, sizeArray);
    sizeArray = 2*sizeArray;
    printf("now size %d\n", sizeArray);
    ptrA[4] = 8;    
    show_elements(ptrA, sizeArray);
    free(ptrA);
    return 0;
}