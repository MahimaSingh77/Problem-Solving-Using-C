/*
Create a string using " " and print its content using loop
*/

#include<stdio.h>
int main(){
    char str[] = "MahimaSingh";
    for(int i=0; str[i] != '\0' ; i++){
        printf("%c" , str[i]);
    }
}