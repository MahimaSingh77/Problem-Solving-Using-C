/*
Check if an array is sorted 
*/

#include<stdio.h>
int sorted(int arr[] , int n){
    for(int i=1 ; i<n ; i++){
        if(arr[i] < arr[i-1]){
            return 0;
        }  
        
    }
     return 1; 
}
int main(){
       int n;
       printf("Enter the size of the array : ");
       scanf("%d" , &n);

       int arr[n];
       for(int i=0; i<n; i++){
       scanf("%d" , &arr[i]);
       } 


       if (sorted(arr , n))
        printf("Sorted");
       
       else
       printf("Not Sorted");
}