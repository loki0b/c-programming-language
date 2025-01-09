#include <stdio.h>

#define LIMIT 1000

int main() {
    int c;
    char line[LIMIT];


    while ((c = getchar ()) !=  EOF) {
        if (c == '\t') {
            int i;

            i = 0;
            while (i++ < 2)
                putchar(' ');
        }
        else
            putchar(c);
    }

    return 0;
}
