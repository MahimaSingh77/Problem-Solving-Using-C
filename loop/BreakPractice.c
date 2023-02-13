/*
Write a program to input a number and print the smallest divisor of the number after 1
*/


#include<stdio.h>
int main(){

    int num;
    printf("Enter  the number : ");
    scanf("%d" , &num);

    for(int i=2; i<=num; i++){
           
            if(num%i==0){
                printf("Smallest divisor is %d" , i);
                break;
             }
    
    }
    
    return 0;  
}

