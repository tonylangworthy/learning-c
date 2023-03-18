#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define ARRAY_SIZE 4

typedef struct Person {
    int age;
    int id;
} Person;

int main(int argc, char* argv[]) {
    // Declare and initialize arrays
    int numbers[] = { 1, 2, 3, 4 };

    const double floats[] = { 1.23, 1.45, 1.67, 1.99 };

    const char name[] = "Zach";

    const Person people[] = {
        { 47, 1 },
        { 35, 2 }
    };

    // Looping over array members using array notation
    for(int i=0; i<ARRAY_SIZE; i++) {
        printf("\nNumber: %d\n", numbers[i]);
    }
 
    return 0;
}