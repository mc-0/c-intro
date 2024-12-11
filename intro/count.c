#include "count.h"
# include <stdio.h>

void countchar(void) {
    printf("Begin typing to count the # of characters...");
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
    printf("Begin typing to count the # of lines...");

    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++count;
    }
    printf("# of Lines: %d", count);
}
