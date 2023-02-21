/*
C program to add two numbers using pointers
*/
#include<stdio.h>
int main (){
    int a , b;
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("Enter the value of a : ");
    scanf("%d" , ptr1);
    printf("Enter the value of b : ");
    scanf("%d" , ptr2);
    printf("The sum is %d : " , *ptr1 + *ptr2);
}