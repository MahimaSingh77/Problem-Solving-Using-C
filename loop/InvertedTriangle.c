/*
print inverted triangle
*/
/*
#include<stdio.h>
int main(){
     int n;
    printf("Enter the value of n : ");
    scanf("%d" , &n);
    for(int i=1; i<=n; i++){
          for (int j=1; j<=n; j++){
            if(j<i){
                printf(" ");
            }
            else printf("*");
          }
          printf("\n");
    }

    return 0;
}

*/

/*
print inverted triangle
*/

#include<stdio.h>
int main(){
     int n;
    printf("Enter the value of n : ");
    scanf("%d" , &n);
    for(int row=1; row<=n; row++){
          for (int column=1; column<=n; column++){
            if(column<=(n-row))
                printf("  ");
            
            else printf("* ");
          }
          printf("\n");
    }

    return 0;
}