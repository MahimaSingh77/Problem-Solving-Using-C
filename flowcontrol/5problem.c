/*
Given a number a , b and c , we need to find out the largest of these.
*/

#include<stdio.h>

int main(){

    int a , b , c ;

    printf("Enter a : ");
    scanf("%d" , &a);
    printf("Enter b : ");
    scanf("%d" , &b);
    printf("Enter c : ");
    scanf("%d" , &c);

    if(a>b && a>c)
    printf("The largest of the given numbers is %d\n" , a);
    else if (b>a && b>c)
    printf("The largest of the given numbers is %d\n" , b);
    else
    printf("The largest of the given numbers is %d\n" , c);


}