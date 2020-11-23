#include "ch02.h"

int main() {
    char *args[] = {"./test", "hello", "world!\n", NULL};
    if (execve("./test", args, NULL) == -1) {
        perror("execve!\n");
        exit(EXIT_FAILURE);
    }
    puts("Never get here!\n");
    exit(EXIT_SUCCESS);
}
