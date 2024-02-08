#include <stdio.h>
#include <stdlib.h>

void in_the_list(int* sequence, int size){
    int number;
    printf("give a number ");
    scanf("%d", &number);
    for(int i=0; i<size; i++){
        if(*(sequence+i) == number){
            printf("%d is in the list.\n", number);
            return;
        }
    }
    printf("%d not in the list.", number);
}

int main(void){
    int array[] = {0, 1, 2, 4};
    int size = sizeof(array)/sizeof(array[0]);
    in_the_list(array, size);
    return 0;
}