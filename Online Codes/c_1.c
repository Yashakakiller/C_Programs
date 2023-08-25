#include <conio.h>
#include <stdio.h>


void main(){
    int a ,b,d ,e;
    long int f;
    float c;
    a =( 1 ,2); // comma precendence
    b = -20;
    c = 2.0;
    d = 5;
    
    
    
    // printf("%d",a);
    
    // d denote space
    // printf("%3d\n",a+b);//30
    // printf("%10d\n",a-b);//-10
    // printf("%d\n",a*b);//200
    // printf("%d\n",a/b);//0
    // printf("%d\n",a%b);//10
    // printf("%d\n",a%c);// raise error because of floar
    
    
    // printf("%d",(1 * 4) / 5 + 10 * 3 + (4 - 1));
    //         4   / 5 + 30 + 3
    //          0 + 30  + 3 => 33
    
    
    // realtional operator 
    // printf("%d",a > b);//1
    // printf("%d",a >= b);//1
    // printf("%d",a < b);//0
    // printf("%d",a <= b);//0
    // printf("%d",a == b);//0
    // printf("%d",a != b);//1
    
    
    
    // right to left
    // printf("%d %d %d",++a , a++ , a++);
    //              4        2        1
    
    
    
    // shorthand
    // d = 1;
    // d = a + d ; //d  = 2 + d(10) => 12
    // d+=a ;// d = d +a
    // printf("%d",d);
    
    
    // d-=a ;// d = d  - a
    // printf("%d",d);
    
    // d*=a ;// d = d  * a
    // printf("%d",d);
    
    // d/=a ;// d = d  / a
    // printf("%d",d);
    
    
    
    // conditional
    
    // e = a > d ? 100 : 200 ;// True : False
    // printf("%d",e);
    // scanf("%ld",&f);// bill
    // e = f > 5000 ? (40 * f)/100 : (10 * f)/100 ;
    
    // printf("%d",e);
    
    
    
    // logical
    
    // e = a>b && b>d;  // and 
    // e = !(a>b || b>d);
    //  2 > -20 (1)  && -20 > 5;
    // printf("%d",e);// false (and)
    // printf("%d",e);// true (or)
    // printf("%d",e);// false (not)
    
    // e = (!(a>b)) > b && !(c>d) + 1 ;
    //   1   && 1 
    // printf("%d",e); => True
    
    // 'y'    "yash\0"
    
    printf("%d\n",2 + 2);
    // printf("%.2f\n",2.0 + 2.0);
    // printf("%d\n",2 + (int)2.0);
    printf("%d",2 + '2');
}





