#include <conio.h>
#include <stdio.h>

void main(){
    int list[5];
    int i,a,b;

    for(i = 0 ; i < 5 ;i++){
        scanf("%d",&list[i]);
    }

    for(i = 0 ; i <= 5 ; i++){
        for(a = 0 ; a < 5-i ; a++){
            if (list[a] > list[a+1]){
                b = list[a];
                list[a] = list[a+1];
                list[a+1]=b;
            }
        }
    }

     for(i = 0 ; i < 5 ;i++){
        printf("\n%d",list[i]);
    }




}