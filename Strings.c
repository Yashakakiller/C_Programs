#include <conio.h>
#include <stdio.h>
#include <string.h>

void main(){
    int i ,j;
    char x = 'r';
    printf("%c",x); // printing a signle char


    // every string ends with NULL(\0)
    
    printf("\n");
    char nameArray [] = "yash";
    puts(nameArray); // this will print the array

    printf("\n");
    char numAscArr[] = {66,67,68,69};
    puts(numAscArr); 
    // this will print  => BCDE(garbage)


    printf("\n");
    char numAscArr1[] = {65,67,68,69,0};// 0 represets null    and we con do like this also   char numAscArr1 = "BCDE"
    puts(numAscArr1); 
    // this will print  => BCDE



    printf("\n");
    for(i = 0 ; numAscArr1[i] != '\0'; i++ ){
            // if(numAscArr1[i] == 0)
            //     break;
        printf("%c\n",numAscArr1[i]);
    }





    // Printing a reverse String
    printf("\n");

    char testArray[] = "Hello Coders";
    for(i = 0 ; testArray[i] != '\0'; i++); // i = 6
    for(i = i - 1 ; i >=0 ; i--)
        printf("%c\n",testArray[i]);






    // Printing String in Differnet Patterns
    printf("\n");
    for(i = 0 ; testArray[i] != '\0' ; i++){
        for(j = 0 ; j <= i ; j++){
            printf("%c",testArray[j]);
        }
        printf("\n");
    }




    // stroing a string using gets() function
    printf("\n");
    char name[10] = {};
    int a = 0;
    gets(name);
    for(i = 0 ; name[i] != '\0' ; i++){
        if(name[i] == ' ')
            a++;
    }
    puts(name);
    printf("\n total length in the string is %d and total whitespaces is %d and total words are %d",i ,a,a+1);






    // input a string and copy it in another string
    printf("\n");
    char name1 [20] ;
    char name2 [20] ;

    printf("Enter the name : ");
    gets(name1);
    for(i = 0 ; name1[i] != '\0' ; i++){
        name2[i] = name1[i];
    }    
    name2[i] = '\0';
    printf("The name2 is : ");
    puts(name2);





    // concatenate a string
    char cName1[10];
    char cName2[10];
    printf("Enter the name ");
    gets(cName1);
    gets(cName2);
    for ( i = 0 ; cName1[i] != '\0' ; i++);
    cName1[i] = ' ';
    for(i = i + 1 , j = 0 ; cName2[j] != '\0' ; i++, j++){
        cName1[i] = cName2[j];
    }
    cName1[i] = '\0';
    puts(cName1);
}
