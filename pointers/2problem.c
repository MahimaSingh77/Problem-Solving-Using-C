/* Write a C program to create, initialize and demonstrate the use of pointers.
 How to access values and addresses using a pointer variable in C programming. */

 #include<stdio.h>
 int main(){

    int x = 5;
    int *ptr ;
    ptr = &x;
    printf("adrdress of x = %d and value of x = %d " , ptr , *ptr);

 }