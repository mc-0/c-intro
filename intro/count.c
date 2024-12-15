#include "count.h"
# include <stdio.h>

void countchar(void) {
    printf("Begin typing to count the # of characters:\n");
    int c, count;
    c = count = 0;
    while((c = getchar()) != EOF){
        if (c != '\n')
            ++count;
    }
    printf("# of Characters: %d", count);
}

void countline(void) {
    int c, count = 0;
    printf("Begin typing to count the # of lines:\n");

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++count;
    }
    printf("# of Lines: %d", count);
}

void wc(void) {
    int c, count = 0;
    int state = OUT;

    printf("Begin typing to count the # of words:\n");

    while ((c = getchar()) != EOF) {
        if (c != '\n' && c != ' ' && c != '\t') {
            if (state == OUT) {
                state = IN;
                ++count; // Increment count when entering a word
            }
        } else {
            state = OUT; // Exit the word on whitespace
        }
    }

    printf("\n# of Words: %d\n", count);
}
