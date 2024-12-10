#include <stdio.h>
#include "intro/temp.h"


int main(void) {
    int c;

    printf("Please enter 'F' or 'C' for corresponding conversion table...\n");
    while ((c = getchar()) != EOF) {
        if (c == 'F') {
            ftoc();
            break;
        }
        else if (c == 'C') {
            ctof();
            break;
        }
        else {
            printf("Invalid Entry - Please enter 'F' or 'C'...\n");
        }
        while ((c = getchar()) != '\n' && c != EOF);
    }
    return 0;
}