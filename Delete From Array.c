#include <conio.h>
#include <stdio.h>


// first apperance value deleted
/*void main(){
    int data[5];
    int a , b  ,c=0 ;
    
    
    for(a = 0 ; a<5 ; a++){
        scanf("%d",&data[a]);
    }
    
    printf("Please Enter Number");
    scanf("%d",&b);
    
    for(a = 0 ; a<5;a++){
        if(data[a] == b)
            break;
    }
    
    if(a == 5)
        printf("No Match Found for the number to be deleted");
    
    else{
        for(a ; a<5 ;a++){
            data[a] = data[a + 1];
        }
    }
    for(a = 0 ; a<5 ; a++){
        printf("\n%d\n",data[a]);
    }
}*/


// all apperance values deleted
void main(){

    int data[5];
    int a, b, c = 0, d;

    for (a = 0; a < 5; a++)
    {
        scanf("%d", &data[a]);
    }

    printf("Enter number to be deleted : ");
    scanf("%d", &b);

    for (a = 0; a < 5; a++)
    {
        if (data[a] == b)
        {
            c++;
            printf("Number found at %d position\n", a + 1);
        }
    }
    printf("Your Number found %d times\n", c);

    if (c == 0)
    {
        printf("No match found\n");
    }
    else
    {
        for (; c > 0; c--)
        {
            for (a = 0; a < 5; a++) 
            {
                if (data[a] == b)
                {
                    for (; a < 5; a++)
                    {
                        data[a] = data[a + 1];
                    }
                }
            }
        }
    }

    for (a = 0; a < 5; a++)
    {
        printf("%d\n", data[a]);
    }
}

