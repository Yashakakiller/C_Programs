#include <conio.h>
#include <stdio.h>
#include <string.h>




void main(){
    int i , j , k ;
    // byte of a structure depend on the data members

    // 60 byte 
    // memory is allocated to variables only and not the data type
    struct userData // userData is a user defined DATATYPE
    {
        char userName[50];
        char password[50];
        char email[50];
    };

    // creating an instacnce of userData
    struct userData user;// user is also called the object or structure variable

    struct userData testUser;
    // we can also create an object array
    struct userData globalUsers[3] ;// here it will create 60*3=180 byte object because each record store 60 byte

    /*
    
            globalUsers               now i can create 5 records
                                   username           password          email
                                0   
                                1   
                                2   

    */

    // Filling Data in Object




    /*strcpy(user.email ,"yashakakiller@gmail.com");
    strcpy(user.password ,"whyShouldITellYouThePassword");
    strcpy(user.userName ,"npm_x_yarn");

    puts(user.userName);
    puts(user.email);
    puts(user.password);*/




    /*strcpy(globalUsers[0].email ,"yashakakiller@gmail.com");
    strcpy(globalUsers[0].password ,"whyShouldITellYouThePassword");
    strcpy(globalUsers[0].userName ,"npm_x_yarn");
    strcpy(globalUsers[1].email ,"gameakayash@gmail.com");
    strcpy(globalUsers[1].password ,"whyShouldITellYouThePassword");
    strcpy(globalUsers[1].userName ,"npm_x_yarn");
    strcpy(globalUsers[2].email ,"meenu0856gupta@gmail.com");
    strcpy(globalUsers[2].password ,"whyShouldITellYouThePassword");
    strcpy(globalUsers[2].userName ,"npm_x_yarn");

    for(i = 0  ; i <=2 ; i++){
        puts(globalUsers[i].email);
        puts(globalUsers[i].password);
        puts(globalUsers[i].userName);

        printf("\n");

    }*/





    // Using pointer with Structure


    strcpy(testUser.email,"elonadani@gmail.com");
    strcpy(testUser.password,"tesla_x_adani");
    strcpy(testUser.userName,"elon_x_adani");


    struct userData *ptr ;
    ptr = &testUser;
    /*printf("Email is : %s\n", ptr->email);
    printf("Password is : %s\n", ptr->password);*/




/*
    struct student
    {
        char name[20],div[25];
        int p , c , m , sum, i;
        float per ;

    };

    struct student testStudents[5] ;
    // 47 byte * 5 ;

    printf("enter name and marks of students \n");
    for(i = 0 ; i<5;i++){
        printf("Enter Name : ");
        gets(testStudents[i].name);
        printf("\n Enter the marks of 3 subjects : \n");
        scanf("%d %d %d",&testStudents[i].p,&testStudents[i].c,&testStudents[i].m);

        testStudents[i].sum = testStudents[i].c +testStudents[i].p +testStudents[i].m ;

        testStudents[i].per = testStudents[i].sum * 100 / 300 ;


        if(testStudents[i].per > 60.0)
            strcpy(testStudents[i].div , "first division");
        else    
            if(testStudents[i].per >45.0)
                strcpy(testStudents[i].div , "second division");
            else 
                if(testStudents[i].per > 33.0)
                    strcpy(testStudents[i].div , "third division");
                else 
                    strcpy(testStudents[i].div , "fail bro fail");

    }


    
    for(i = 0 ; i < 5 ; i++){
        printf("Your Result is : \n");
        printf("Your Name is :");
        puts(testStudents[i].name);
        printf("Your Division is :");
        puts(testStudents[i].div);
        printf("Your Physics marks  is %d :",testStudents[i].p);
        printf("Your Chemistry marks  is %d :",testStudents[i].c);
        printf("Your Maths marks  is %d :",testStudents[i].m);
        printf("Your percentage is  marks  is %.2f :",testStudents[i].per);
       
    }

*/
    






}