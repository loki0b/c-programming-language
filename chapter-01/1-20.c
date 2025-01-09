/* 
 * Write a program detab that replaces tabs in the input with the proper number of blanks to space to the next tab stop.
 * Assume a fixed set of tab stops, say every n columns. Should n be a variable or a symbolic parameter?
 */
#include <stdio.h>

#define BUFFER 1024
#define TABSTOP 8
#define TAB     '\t'
#define BLANK   ' '
#define NEWLINE '\n'

int main() {
    int c, i;
    char line[BUFFER];

    i = 0;
    while ((c = getchar ()) !=  EOF) {
        if (c == TAB) {
            while (i++ < TABSTOP)
                putchar('#');
        }
        else {
            putchar(c);
            ++i;
        }
        if (i >= TABSTOP || c == NEWLINE)
            i = 0;
    }

    return 0;
}
