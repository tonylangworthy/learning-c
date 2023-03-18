#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int my_number = 10;

    // Declare a pointer
    int *my_ptr;

    // Print the address of my_number
    printf("Address of 'my_number': %p\n", &my_number);

    // Initialize a pointer using the address operator - &
    my_ptr = &my_number;

    char *name = (char*) malloc(8 * sizeof(char));

    // Dereference a pointer to read the value at its address
    printf("Value of 'my_number': %d\n", *my_ptr);

    int my_copied_number = *my_ptr;

    // Print the value of my_copied_number
    printf("Value of 'my_copied_number': %d\n", my_copied_number);

    // Dereference a pointer to assign the value at its address
    *my_ptr = 20;

    printf("Value of 'my_number' after assigning a new value: %d\n", *my_ptr);

    return 0;
}