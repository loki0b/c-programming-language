/*
 * Write a program entab that replaces strings of blanks with the minimum number of tabs and blanks to achieve the same spacing.
 * Use the same stops as for detab . When either a tab or a single blank would suffice to reach a tab stop, which should be given preference? 
*/
#include <stdio.h>

#define BUFFER      1024
#define TABSTOP     8
#define TAB         '\t'
#define BLANK       ' '
#define NEWLINE     '\n'
#define NULLCHAR    '\0'

int get_line(char str[]);
void entab(char str[]);

int main() {
    char line[BUFFER];

    while (get_line(line) != 1) {
        entab(line);
    }

    return 0;
}

int get_line(char str[]) {
    int c, i;

    for (i = 0; i < BUFFER - 1 && (c = getchar()) != EOF && c != NEWLINE; i++)
        str[i] = c;
    if (c == EOF)
        return 1;
    else if (c == NEWLINE) {
        str[i++] = NEWLINE;
    }
    str[i] = NULLCHAR;
    
    return 0;
}

void entab(char str[]) {
    int i, j;

    i = j = 0;
    while (str[i] != NULLCHAR) {
        if (str[i] == BLANK) {
            int tabs, blanks;
            
            while (str[i] == BLANK) {
                j++;
                i++;
            }

            tabs = j / 8;
            blanks = j % 8;
            while (tabs-- > 0)
                putchar(TAB);
            while (blanks-- > 0)
                putchar(BLANK);

            j = 0;
        }
        else
            putchar(str[i++]);
    }
}
