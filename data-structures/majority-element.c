// O(n) using Moore voting algorithm

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int array[] = {2, 4, 2, 1, 2};
    int length = 5;
    int count =1;
    int candidate = array[0];
    for (size_t i = 1; i < length; i++)
    {
        if (array[i] == candidate){
            count++;
        }
        else
        {
            count--;
            if(count==0){
                candidate = array[i];
                count = 1;
            }
        }
        
    }
    count=0;
    for (size_t i = 0; i < length; i++)
    {
        if (array[i]==candidate){
            count++;
        }
    }
    if (count > length/2)
    {
        printf("Majority element is %d\n", candidate);
    }
    else{
        printf("No majority element found\n");
    }
    
    
    printf("The most occuring element is %d", candidate);

    return 0;
}