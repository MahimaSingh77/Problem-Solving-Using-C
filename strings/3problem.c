/*
write a program to take string as input from the user using %c and %s . Confirm that the
strings are equal.
*/

#include<stdio.h>
#include<string.h>
int main(){
    char *ptr1;
    char *ptr2;
    printf("Enter the first string : ");
    scanf("%s" , ptr1);
    printf("Enter the second string : ");
    scanf("%s" , ptr2);

    int a = strcmp(ptr1 , ptr2);
    if(a==0)
        printf("Strings are equal");
    else 
        printf("Strings are not equal");
    

}