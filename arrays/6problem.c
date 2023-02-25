/*
Write a C program to print all negative elements in an array
*/

#include<stdio.h>
int main(){
       int n;
       printf("Enter the size of the array : ");
       scanf("%d" , &n);

       
       int arr[n];
       for(int i=0; i<n; i++){
       scanf("%d" , &arr[i]);
       } 
       printf("The negative elements of the array is : ");
       for(int j=0; j<n; j++)
       {
        
        if (arr[j] < 0 )
            printf("%d , " , arr[j] );
        else{
            continue;
        }

       }
}