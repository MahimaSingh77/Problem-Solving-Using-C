// check whether a number is even or odd and positive , negative or zero

#include<stdio.h>
int main(){

    int num;
    printf("Enter the number to be checked :- ");
    scanf("%d" , &num);
     
    if(num>0){
    
        if(num%2==0)
        printf("The entered number is POSITIVE EVEN\n");
        
        else 
        printf("The entered number is POSITIVE ODD\n");
        
    }

    else if(num<0){

        if(num%2==0)
        printf("The entered number is NEGATIVE EVEN\n");
        
        else 
        printf("The entered number is NEGATIVE ODD\n");
        
    }


    else
        printf("The entered number is ZERO\n");  
}