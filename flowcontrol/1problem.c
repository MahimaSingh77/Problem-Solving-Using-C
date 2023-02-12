// check whether a number is even or odd
#include<stdio.h>
int main(){
    int num;
    printf("Enter the number to be checked :- ");
    scanf("%d" , &num);

    if(num % 2 == 0)
    printf("Then entered number is even\n");
    else
    printf("The entered number is odd\n");
    
    return 0;
}