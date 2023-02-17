/*
print tables of first n natural number
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d" , &n);
   
    for(int i=1; i<=n ; i++){
        for(int j=1 ; j<=10; j++){
            int result = i*j;
            printf("%d " , result);
            }
         printf("\n");
    }

}