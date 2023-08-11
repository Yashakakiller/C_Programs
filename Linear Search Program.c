#include <conio.h>
#include <stdio.h>

void main(){
    int data[5];
    int a , b  ,c=0 ;
    
    for(a = 0 ; a<5 ; a++){
        scanf("%d",&data[a]);
    }
    
    printf("Please Enter Number");
    scanf("%d",&b);
    
    for(a = 0 ; a<5;a++){
        if(data[a] == b){
            c++ ;
            printf("Number Found at %d Position\n",a+1);
        }
    }
    
    printf("\nNumber found in the array %d times",c);
    
}