#include <stdio.h>

//const char* arry; will ensure we can't modify whatever is in the arry

void findNegative(int* arry, int size){
    int i;
    for (i=0; i<size; i++){
        if (*(arry+i) < 0){
            
            printf("%d", *(arry+i));
        }
        continue;
    }
}

int main(){
    int arrayA[] = {2, 4, -6, 8, 10};
    int arraySize = sizeof(arrayA) / sizeof(arrayA[0]);
    findNegative(arrayA, arraySize);

    return 0;
}