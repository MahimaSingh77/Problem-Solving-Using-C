/*
Print square pattern
*/

#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d" , &n);
    for(int row = 0; row < n ; row++){
        for (int column=0 ; column < n; column++){
            printf("* ");
        }
        printf("\n");
    }
}