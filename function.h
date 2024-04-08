#ifndef FUNCTION_H
#define FUNCTION_H

struct Book {
    char bookName[10];
    char category[10];
    char ISBN[15];
    int pages;
    char publisher[20];
};

void displayBooks(struct Book *booksArray, int arraySize);
void printBooks(struct Book *booksArray, int arraySize);

#endif

