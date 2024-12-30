#include <stdio.h>

int main() {
    int c;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            while (c == ' ') {
                c = getchar();
            }
            printf(" ");
        }
        putchar(c);
    }
    return 0;
}
