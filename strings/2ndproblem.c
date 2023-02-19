/*
Write your own version of strlen function from <string.h> 
*/

#include<stdio.h>
int length(char *ptr){
    int count = 0;
   
    while(*ptr != '\0'){
        count++;
        ptr++;
    }
   printf("%d" , count);
}

int main(){
char *ptr = "MAHIMA";
length(ptr);
}