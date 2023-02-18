/*
Write a C program to find the number of Non Repeated Elements in an Array.
*/

#include<stdio.h>
int main(){
       int n;
    int arr[n];
 
    printf("Enter the number of elements of the array : ");
    scanf("%d" , &n);
    printf("Enter the elements of an array : ");
    for(int i=0; i<n; i++){
        scanf("d" , arr[i]);
    }
    return 0;
}