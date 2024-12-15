#include "pointers/find.h"

//void checkArray(int *x, int size);

int main(int argc, char *argv[]) {
    /*printf("Argument Counter: %d\n", argc);

    printf("ARGUMENTS:\n");

    for (int i = 0; i < argc; i++) {
        printf("%d - %s\n", i, *argv++);
    }*/

    find(argc, *argv);
    return 0;
}

