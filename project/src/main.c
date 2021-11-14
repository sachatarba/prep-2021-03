#include <stdlib.h>
#include <stdio.h>
#include "parser.c"

int main(int argc, const char **argv) {
    if (argc != 2) {
        return -1;
    }

    const char *path_to_eml = argv[1];

    parser(path_to_eml);
    return 0;
}
