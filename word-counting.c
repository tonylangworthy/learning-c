#include <stdio.h>

// Define symbolic constants
#define IN 1
#define OUT 0

int main() {

    int c, n1, nw, nc, state;

    // Initially, the program starts the state "OUT of a word"
    state = OUT;

    // Sets all 3 variables to 0
    n1 = nw = nc = 0;

    printf("Enter a word to be counted\n");

    while ((c = getchar()) != EOF) {

        printf("Word: %c\n", c);

        ++nc;
        if (c == '\n') {
            printf("c == \n");
            ++n1;
        }
        
        // Expressions connected by && or || are evaluated left to right.
        // This means that if c == ' ', the other 2 expressions will not be evaluated
        if (c == ' ' || c == '\n' || c == '\t') {
            printf("state is being set to OUT\n");
            state = OUT;
        }

        else if (state == OUT) {
            printf("state is being set to IN\n");
            state = IN;
            ++nw;
        }
    }
    printf("Printing word count: \n");
    printf("%d %d %d\n", n1, nw, nc);
}