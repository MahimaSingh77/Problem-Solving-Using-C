/*
Implement a calculator using the following operations 
*/

#include<stdio.h>
int main(){
    int a , b , x;
    printf("Enter the first numbers: ");
    scanf("%d" , &a);
    printf("Enter the second numbers: ");
    scanf("%d" , &b);
    printf("Enter 1 for addition , 2 for subtraction and 3 for multiplication : ");
    scanf("%d" , &x);
    switch(x){
        case 1:   printf("The sum of %d and %d is  %d" , a , b , a + b);  break;
        case 2:   printf("The subtraction of %d and %d is  %d" , a , b , a - b);  break;
        case 3:   printf("The multiplication of %d and %d is  %d" , a , b , a * b);  break;
        default: printf("Invalid operator");
    }
    return 0;

}