#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

// Pointer with Functions


// call by reference

// swap , insert , show  , delete , sort 
void swap(int *, int *);
void inputDataAndShow(int *, int);
void searchAndDelete(int *, int, int);
void sortData(int* ,int);


void main()
{
    int n, m;
    int *p;
    printf("Enter how many values to insert : ");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int)); // p contains the base address
    inputDataAndShow(p, n);
    printf("\nEnter which value to be deleted : ");
    scanf("%d", &m);
    searchAndDelete(p, m, n);
    swap(&n, &m);
    printf("\n The values of a and b are %d %d\n", n, m);
    sortData(p,n);
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void inputDataAndShow(int *listData, int n)
{
    int i;
    printf("Enter %d values \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &listData[i]);
    }

    printf("\n  Your values are \n");
    for (i = 0; i < n; i++)
    {
        printf("\n %d", listData[i]);
    }
}

void searchAndDelete(int *listData, int a, int n)
{
    int i, j = 0, k, l;

    for (i = 0; i < n; i++)
    {
        if (listData[i] == a)
            j++;
    }
    // printf("%d",j);
    if (j != 0)
    {
        printf("\nYour value found %d times\n", j);
        printf("Press 1 to delete the searched value or Press 2 to exit the program: ");
        scanf("%d", &k);

        switch (k)
        {
        case 1:
            for (i = 0; i <= j; i++)
            {
                for (l = 0; l < n; l++)
                {

                    if (listData[l] == a)
                    {
                        for (; l < n; l++)
                            listData[l] = listData[l + 1];
                        n--;
                    }
                }
            }
            printf("\n  Your values are \n");
            for (i = 0; i < n; i++)
            {
                printf("\n %d", listData[i]);
            }

            break;

        default:
            break;
        }
    }
    else
    {
        printf("\nValue not found");
    }
}



void sortData(int *listData, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (listData[j] > listData[j + 1]) {
                temp = listData[j];
                listData[j] = listData[j + 1];
                listData[j + 1] = temp;
            }
        }
    }
    printf("\nYour values after sorting are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", listData[i]);
    }
}





