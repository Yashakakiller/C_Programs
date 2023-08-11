#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
    
    // an array can also work as a pointer

    // Syntax of building Dynamic Memory
    // pointerName = (castType*)malloc(variables/constant * sizeof(dataType))

    // malloc functions is used to assign free memory allocation and if not free memory is available then it return NULL or '\0'


    // printf("%d",sizeof(int));  in vs code int has 4 byte 

   /* int n,i;
    int *p;
    printf("Enter how many values you want to enter : ");
    scanf("%d",&n);
    p = (int*)malloc(n*sizeof(int));
    printf("\n%u",p);// represents the base address of the dynamic arrray
    printf("\n Enter %d values : \n",n);
    for(i= 0;i<n;i++)
        scanf("%d",&p[i]);//(p[i] => (p(baseAddress) + i(i * sizeof(INT))))


    for(i= 0;i<n;i++)
        printf("\n%ld\n",&p[i]);// address of each dynamic array cell


    for(i= 0;i<n;i++)
        printf("\n%d\n",p[i]);// values of each dynamic array cell

    */


  /* float *p;
   p = (float*)malloc(2 * sizeof(float));
   *p = 100.99;
   printf("%u %.2f\n",p, *p);
    p++ ;
    *p = 12.8;
    
   printf("%u %.2f",p,*p); */


    // A pointer cannot hold another pointer address but if we want to store address then we have to write **(double pointer) before pointer name

    /*int a = 10 ;
    int *p ,**x;
    p = &a;
    // printf("%u %u %u",p ,*p, &p);
    x = &p;
    printf("\n\n%u %u %u %u %u %u %u ",p ,*p, &p,x , *x, **x , &x );*/

   
// pointer always use memory space of (int byte size (in vs code it takes 4 byte) ) byte to hold memory address


// a pointer is known as wild pointer if it not initialized any address or NULL value


}