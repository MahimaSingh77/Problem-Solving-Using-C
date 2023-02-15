#include<stdio.h>

int max_array( int arr[2][3] , int m, int n){
int max_element = -10000;
    for(int i=0; i<m; i++){
        for(int j=0; j<n ; j++){
        if( arr[i][j] >= max_element)
        max_element = arr[i][j];
      
    }
}
 printf("%d" , max_element ) ;

}

int main(){

int arr[2][3] = {7,6,5,4,3,2};
max_array(arr , 2 , 3);


}

