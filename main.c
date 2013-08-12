#include <stdio.h>

int main(int argc, char **argv) {

    printf("argc=%d\n", argc);
    printf("Hello Nira !!!\n");

    int i = 1;
    for (; i++ < argc;) {
        printf("argv=%s\n", *++argv);
    }
}

