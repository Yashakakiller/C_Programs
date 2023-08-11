#include <conio.h>
#include <stdio.h>

void main(){
     // [row][column]
    /*int data[3][3] = { {1,2,3} ,{4,5,6}, {7,8,9}};
    int i , j ;

    for(i = 2 ; i >=0 ; i--){
        for(j = 2; j >=0; j--){
            printf("%d",data[i][i]);
        }
        printf("\n");
    }*/


    // Transpose 2D Array
    int arr1[3][3] = {{1,2,3},{4,5,6},{7,8,9}} ,arr2[3][3];
    int i ,j ;


    printf("\n");
    for(i = 0 ; i <=2 ; i++){
        for(j = 0; j <=2; j++){
            arr2[i][j] =arr1[j][i];
        }
        printf("\n");
    }


     for(i = 0 ; i <=2 ; i++){
        for(j = 0; j <=2; j++){
            printf("%d",arr2[i][j]);
        }
        printf("\n");
    }
}
   

