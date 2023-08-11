#include <stdio.h>
#include <string.h>
#include <conio.h>

// Global structure
struct emp {
    char name[20];
    int age, bs;
};

void inputEMP(struct emp*); // Function to input data in object (call by reference)
void showObjData(struct emp); // Function to show data (call by value)

void main() {
    struct emp obj; // Creating an object
    inputEMP(&obj); // Passing the base address of the object
    showObjData(obj); // Passing the object
}

void inputEMP(struct emp* ptr) {
    printf("\nEnter name, age, and bs: ");
    scanf("%s%d%d", ptr->name, &ptr->age, &ptr->bs);
}

void showObjData(struct emp obj) {
    printf("\nYour Name is %s and your age is %d and bs is %d", obj.name, obj.age, obj.bs);
}
