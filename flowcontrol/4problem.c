/* given a number of cups n , you need to find out if the player won the game or the opponent
 first cup will be picked up by the player , if the last cup is picked by the player,player wins.  */

#include<stdio.h>

int main(){

    int n;
    printf("Enter the number of moves:- ");

    scanf("%d" , &n);

    if(n%2==0)
    printf("Opponent won");

    else
    printf("Player won");

    return 0;

}