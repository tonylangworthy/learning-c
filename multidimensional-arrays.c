#include <stdio.h>
#include <stdlib.h>

#define ROWS 10
#define COLUMNS 4

int main(int argc, char* argv[]) {
    // Declare and initialize arrays
    int matrix[ROWS][COLUMNS] = { 
        { 1, 0, 1, 0 },
        { 0, 0, 1, 1 },
        { 1, 1, 1, 1 },
        { 0, 0, 1, 1 },
        { 1, 1, 0, 0 },
        { 0, 0, 0, 0 },
        { 1, 1, 1, 1 },
        { 1, 0, 0, 1 },
        { 1, 1, 0, 1 },
        { 0, 1, 1, 0 },
     };


    // Looping over array members using array notation
    for(int i=0; i<ROWS; i++) {
        for(int j=0; j<COLUMNS; j++) {
            matrix[i][j] = matrix[i][j] ^ 1;
        }
    }
 
    return 0;
}