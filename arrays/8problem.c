/*
Write a C program to find maximum and minimum element in an array. 
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


   int max = arr[0];
   int min = arr[0];

    for(int i = 0; i<n; i++){
        if(max < arr[i])
            max = arr[i];
        if(min > arr[i])
            min = arr[i];
    
        }
      
               printf("The max element is : %d\n" , max);
               printf("The max element is : %d" , min);

}