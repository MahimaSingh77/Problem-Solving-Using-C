// Print the numbers from 1 to n that are not multiple of x.

#include<stdio.h>
int main(){

    int n , x;
    printf("Enter the value of n : ");
    scanf("%d" , &n);
    printf("Enter the value of x : ");
    scanf("%d" , &x);

    for(int i=1 ; i<=n; i++){
        if ( i%x == 0){
            continue;
        }
            printf("%d " , i);  
        }
    }


