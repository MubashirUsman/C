#include <stdio.h>
#include <stdlib.h>

int sumOfElements(int A[]){
   int sum = 0;
   for (int i=0; i< ( sizeof(A)/sizeof(A[0]) ) ; i++){
            
   }
}

     int main()
     {
        int i;
        extern int errno, sys_nerr;

        for (i = 0; i < sys_nerr; ++i)
           {
           fprintf(stderr, "%3d",i);
           errno = i;
           perror(" ");
           }
        exit (0);
     }