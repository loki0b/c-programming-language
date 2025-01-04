#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        while (c != ' ' && c != '\n' && c != '\t' && c != EOF) {
            putchar(c);
            c = getchar();
        }
        putchar('\n');
    }

    return 0;
}
