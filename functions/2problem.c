/*
Given a number n , find the prime factors of that number
*/

#include<stdio.h>
#include<math.h>

int primefactors(int num){
    for(int i=0 ; i<= num ; i++){

        if (isprime(i)==1){
            int x=i;
            while(num%x==0){
            printf("%d" , i);
            x=x*i;
        }
    }
}
}


int main(){
    int num;
    printf("Enter the number whose prime factors are needed :");
    scanf(" %d " , &num);
    primefactors(num); 
}
