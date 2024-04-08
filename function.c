#include <stdio.h>
#include "function.h"

// Function to display the structure array
void displayBooks(struct Book *booksArray, int arraySize) {
    for (int i = 0; i < arraySize; i++) 
    {
        printf("Enter details for Book %d:\n", i + 1);
        printf("Book Name: ");
        scanf("%s", booksArray[i].bookName);
        printf("Category: ");
        scanf("%s", booksArray[i].category);
        printf("ISBN: ");
        scanf("%s", booksArray[i].ISBN);
        printf("Number of Pages: ");
        scanf("%d", &booksArray[i].pages);
        printf("Publisher: ");
        scanf("%s", booksArray[i].publisher);
    }
}

/*Function to print the structure elements*/
void printBooks(struct Book *booksArray, int arraySize) {
    printf("\nBook Details:\n");
    for (int i = 0; i < arraySize; i++) {
        printf("Book %d:\n", i + 1);
        printf("Book Name: %s\n", booksArray[i].bookName);
        printf("Category: %s\n", booksArray[i].category);
        printf("ISBN: %s\n", booksArray[i].ISBN);
        printf("Number of Pages: %d\n", booksArray[i].pages);
        printf("Publisher: %s\n", booksArray[i].publisher);
    }
}

