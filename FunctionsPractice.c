#include <stdio.h>
#include <conio.h>


void input(int x[]);
void show(int x[]);
void sum(int x[]);
void search(int x[], int n);
void delete(int x[], int n);

void main() {
    int list[10];
    int a;
    int b;
    int n;
    input(list);
    show(list);
    sum(list);
    delete(list , 5);
    show(list);
}

void input(int x[]) {
    int i;
    printf("Enter your values: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &x[i]);
    }
}

void show(int x[]) {
    int i;
    printf("\nYour values are: \n");
    for (i = 0; i < 10; i++) {
        printf("%d\n", x[i]);
    }
}

void sum(int x[]) {
    int i;
    long int sum = 0;
    for (i = 0; i < 10; i++) {
        sum = sum + x[i];
    }
    printf("\nThe sum of your values is %ld", sum);
}

void search(int x[], int n) {
    int i;
    int a = 0;

    for (i = 0; i < 10; i++) {
        if (x[i] == n) {
            printf("Value found\n");
            a++;
        }
    }

    if (a > 0) {
        printf("Value found %d times", a);
    } else {
        printf("\nNo value found");
    }
}



void delete(int x[], int n) {
    int i = 0;
    for (; i < 10; i++) {
        if (x[i] == n) {
            x[i] = x[i + 1];
        }
    }
}