#include <stdio.h>
#include <string.h>
#include "find.h"

#define MAXLINE 1000

static int getl(char *line, int max) { // Keep static here
    int c, i;

    i = 0;
    while (--max > 0 && (c = getchar()) != EOF && c != '\n') {
        line[i++] = c;
    }
    if (c == '\n') {
        line[i++] = c;
    }
    line[i] = '\0';
    return i;
}

void find(int argcount, char *args) {
    char line[MAXLINE];
    long lineno = 0;
    int c, ex = 0, num = 0, found = 0;
    printf("%d", argcount);
    printf("%s", args);
    while (--argcount > 0 && ++args[0] == '-') {
        while ((c = ++args[0])) {
            switch (c) {
                case 'x':
                    ex = 1;
                    break;
                case 'n':
                    num = 1;
                    break;
                default:
                    printf("Illegal Option Flag: %c", c);
                    argcount = 0;
                    found = -1;
                    break;
            }
        }

        if (argcount != 1) {
            printf("`find: -x -n pattern`\n");
        }
        else {
            while (getl(line, MAXLINE) > 0) {
                lineno++;
                if ((strstr(line, args) != NULL) != ex) {
                    if (num) {
                        printf("%ld: ", lineno);
                    }
                    printf("%s", line);
                    found++;
                }
            }
        }
    }
}
