#include <conio.h>
#include <stdio.h>

/*

Q1 Check String is palindrome or not (done)
Q2 Count Vovwels and constants in a string using switch case (done)
Q3 Sort String Program
Q4 copy string in reverse order (done)
Q5 convert first letter of every string in UpperCase
Q6 convert lower case string into upper case (done)

*/

/*void main() {
    int i, j = 0;
    char palinStr[20];
    char checkPalin[20];
    
    gets(palinStr);

    for (i = 0; palinStr[i] != '\0'; i++);// get the null position

    for (i = i - 1; i >= 0; i--,  j++) 
        checkPalin[j] = palinStr[i];

    checkPalin[j] = '\0';

    printf("\n Your Reversed String is : ");
    puts(checkPalin);

    printf("\n");
    if(palinStr[0] == checkPalin[0])
        printf("Yes it is a palindorme");
    else 
        printf("No it is not a palindrome");

    
}*/


/*void main() {
    char vcStr[20];
    int vowels = 0, consonants = 0, i = 0;

    printf("Enter a string: ");
    gets(vcStr);

    for ( ; vcStr[i] != '\0' ; i++) {
        switch (vcStr[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                vowels++;
                break;
            case ' ':
                break;
            default:
                consonants++;
                break;
        }
        
    }

    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

}*/


/*void main(){
    // 97 && 122
    char luStr[10];
    int i = 0;
    gets(luStr);
    for(i = 0 ; luStr[i] != '\0' ; i++){
        if(luStr[i] >= 97 && luStr[i] <= 122){
            luStr[i] -= 32;
        }
    }
    puts(luStr);
}*/



