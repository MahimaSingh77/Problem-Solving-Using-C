/*
print triangle pattern
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d" , &n);
    for(int row=1; row <= n; row++){
        for(int column = 1; column<=row; column++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}