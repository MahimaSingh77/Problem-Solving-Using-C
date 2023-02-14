/*
Given a number n , find the 1st digit of that number    //Recursive function
*/

#include<stdio.h>

int fun(int num){
         while (num>=10){
            num=num/10;
            }
        return num;
}
int main(){
        
        int num;
        printf("Enter the number : "); 
        scanf("%d" , &num);
        fun(num);
        int firstdig = fun(num);
        printf("The firstdigit of the given number is %d" , firstdig);
}
