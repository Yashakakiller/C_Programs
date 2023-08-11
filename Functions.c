#include <stdio.h>
#include <conio.h>

// typpes of categories

/*
1. return value with passing parameter
2. no return no pasing of parameter
3. return value without passing paramter
4. no return with passing parameter
*/


/*
1. Factorial Function
2. Reverse Function
3. Palindrome Checking Function
4. Largest Number Finder Function
*/



//long int factorial(int);// category 1
//void factorial(); // category 2
//long int factorial(); // category 3
//void factorial(int); //  category 4




//long int reverse(long int);// category 1
//void reverse(); // category 2
//long int reverse(); // category 3
//void reverse(long int); //  category 4




//char palindrome(long int);// category 1
//void palindrome(); // category 2
//char palindrome(); // category 3
//void palindrome(long int); //  category 4


void main(){

    // category 1
    /*int a ;
    long int b;
    printf("Enter your Number : ");
    scanf("%d",&a);

    b = factorial(a); 
    printf("Your Number is %d and its factorial is %d",a,b);*/

    // category 2
    /*factorial();*/

    
    // cateogry 3
    /*long int a;
    a = factorial();
    printf("Your Factorial is %d",a);*/


    //category 4
    /*factorial(6);*/






    // category 1
    /*long int a;
    a = reverse(4321);
    printf("Your reversed Number is %ld",a);*/


    // category 2
    /*reverse();*/


    //category 3
    /*long int a ;
    a = reverse();
    printf("Your reversed number is %ld",a);*/


    //category 4
    /*reverse(5264);*/






    //category 1
    /*char n;
    n = palindrome(131312);
    printf("%c",n);*/


    //category 2
    /*palindrome();*/


    //category 3
    /*char a;
    a = palindrome();
    printf("%c",a);*/


    //category 4
   /*palindrome(315513);*/

}





// Factorial Function

/*long int factorial(int a){ // Category 1
    int b ;
    long int c=1 ;
    for(b = 1 ;b<=a;b++){
        c = c  * b ;
    }
    return (c);
}*/


/*long int factorial(){ // Category 2
    int a ,b;
    long int c=1;
    printf("Enter the number : ");
    scanf("%d",&a);

    for(b= 1 ; b<=a;b++){
        c = c * b;
    }
    printf("Your Number is %d and its factorial is %ld",a,c);

}*/


/*long int factorial(){ // Category 3
    int a ,b;
    long int c=1;
    printf("Enter the number : ");
    scanf("%d",&a);

    for(b= 1 ; b<=a;b++){
        c = c * b;
    }
    return (c);

}*/


/*void factorial(int a ){ // Category 4
    int b ;
    long int c=1;
    for(b= 1 ; b<=a;b++){
        c = c * b;
    }
    printf("Your Number is %d and its factorial is %ld",a,c);
}*/






// Reverse Function

/*long int reverse(long int a){ // category 1
    int b ;
    long int c=0; 

    while(a > 0){
        b = a % 10;
        c = c * 10 + b;
        a/=10;
    }
    return (c);
}*/


/*void reverse(){ // category 2

    int b ;
    long int a, c=0; 
    printf("Enter your number : ");
    scanf("%ld",&a);

    while(a > 0){
        b = a % 10;
        c = c * 10 + b;
        a/=10;
    }
    printf("Your Entered Number is %ld and your reversed number is %ld",a,c);
}*/


/*long int reverse(){ // category 3

    int b ;
    long int a, c=0; 
    printf("Enter your number : ");
    scanf("%ld",&a);

    while(a > 0){
        b = a % 10;
        c = c * 10 + b;
        a/=10;
    }
    return (c);
}*/


/*void reverse(long int n){ // category 4

    int b ;
    long int c=0; 
 

    while(n > 0){
        b = n % 10;
        c = c * 10 + b;
        n/=10;
    }
    printf("Your Number is %d and its reversed form is %ld",n,c);
}*/





// Palindrome Checking Function

/*char palindrome (long int n){ // category 1
    int a,b;
    char c;
    long int d = 0;
    a = n % 10;

    while(n > 0){
        b = n % 10;
        d = d * 10 + b ;
        n = n/10;
    }
    if(a == d%10){
        c = 'y';
        return c;
    }else{
        c = 'n';
        return c;
    }
}*/


/*void palindrome (){ // category 2
    int a,b;
    long int d = 0 ,n;
    scanf("%ld",&n);
    a = n % 10;

    while(n > 0){
        b = n % 10;
        d = d * 10 + b ;
        n = n/10;
    }
    if(a == d%10){
        printf("yes it is  a palindrome");
    }else{
        printf("No it is not a palindrome");
    }
}*/


/*char palindrome (){ // category 3
    int a,b;
    char c;
    long int d = 0 ,n;
    scanf("%ld",&n);
    a = n % 10;

    while(n > 0){
        b = n % 10;
        d = d * 10 + b ;
        n = n/10;
    }
    if(a == d%10){
        c = 'y';
        return (c);
    }else{
        c = 'n';
        return (c);
    }
}*/


/*void palindrome (long int n){ // category 4
    int a,b;
    long int d = 0 ;
    a = n % 10;

    while(n > 0){
        b = n % 10;
        d = d * 10 + b ;
        n = n/10;
    }
    if(a == d%10){
        printf("yes it is palindrone");
    }else{
         printf("no it is not a palindrone");
    }
}*/



