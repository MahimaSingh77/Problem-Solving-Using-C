// Program to check whether a number is positive , negative or zero .
#include<stdio.h>
int main(){

    int num;

    printf("Enter the number to be checked :- ");
    
    scanf("%d" , &num);

    if (num<0)
    printf("The entered number is Negative");

    else if (num>0)
    printf("The entered number is Positive");

    else
    printf("The entered number is ZERO");

    return 0;   
}
