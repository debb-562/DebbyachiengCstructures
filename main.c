#include <stdio.h>
#include "function.h"

int main()
 {
    int arraySize = 10;
    struct Book booksArray[arraySize];
   
    displayBooks(booksArray, arraySize);
    
    printBooks(booksArray, arraySize);
    return 0;
}

