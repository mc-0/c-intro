#include "temp.h"
#include <stdio.h>

void ftoc() {
    double fahr, celsius;

    fahr = LOWER;
    printf("%s\t%s\n", "F.", "C.");
    printf("%s\n", "===========");
    while (fahr <= UPPER) {
        celsius = 5.0 * (fahr - 32.0) / 9.0;
        printf("%.0f\t%.0f\n", fahr, celsius);
        fahr += STEP;
    }
}

void ctof() {
    double fahr, celsius;

    celsius = LOWER;
    printf("%s\t%s\n", "C.", "F.");
    printf("%s\n", "===========");
    while (celsius <= UPPER) {
        fahr = (celsius * (9.0 / 5.0)) + 32.0;
        printf("%.0f\t%.0f\n", celsius, fahr);
        celsius += STEP;
    }
}

void temps() {
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
}