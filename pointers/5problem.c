/*
C program to input and print array elements using pointers
*/
#include<stdio.h>
int main (){
    int arr[1000];
    int *ptr = arr;
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d" , &n);
    for ( int i = 0; i < n; i++){
     
     scanf("%d" , ptr);
     ptr++;
    
    }  
      for ( int i = 0; i < n; i++){
     
     scanf("%d" , *ptr);
     ptr++;
    
    } 
     
    }

    