/*
c program to swap two numbers 
*/

#include<stdio.h>
int swap( int *ptr1 , int *ptr2){
    
   printf("The value of a is %d \n The value of b is %d " , *ptr2 , *ptr1);
         
}
int main(){
    
    int a , b;

    int *ptr1 = &a;
    int *ptr2 = &b;

    printf("Enter the value of a : ");
    scanf("%d" , ptr1);
    printf("Enter the value of b : ");
    scanf("%d" , ptr2);

    swap(ptr1 , ptr2);

}

