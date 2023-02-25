/*
Write a C program to find sum of all array elements. */

#include<stdio.h>
int sum(int n , int arr[]){
    int sum = 0;
    for(int j=0; j<n; j++){
        sum=sum + arr[j];
    }
    printf("%d " , sum);
}
int main(){
        int n;
       printf("Enter the size of the array : ");
       scanf("%d" , &n);
       int arr[n];
       for(int i=0; i<n; i++){
       scanf("%d" , &arr[i]);
       } 

       sum( n , arr);

}