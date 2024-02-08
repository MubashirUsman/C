// Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.
// Note: - 12:00:00AM on a 12-hour clock is 00:00:00 on a 24-hour clock.
// - 12:00:00PM on a 12-hour clock is 12:00:00 on a 24-hour clock.

#include <stdio.h>
#include <stdlib.h>

 char* extractString(char* string, int length){
    char* str = (char*)malloc(length*sizeof(char));
    *(str+length -1) = '\0';
    for(int i=0; i<(length-1); i++){
        *(str+i) = *(string+i);
    }
    return str;
}
char* timeConversion(char* s) {
    char* string = (char*)malloc(20*sizeof(char));
    int firstTwo;
    char* two_str = extractString(s, 2);
    
    for(int i=0; i<10; i++){
        if(*(s)=='A' || *(s)=='P'){
            if(*(s)=='A'){
                if(atoi(two_str[0] + two_str[1]))
            }
        }
    }
}