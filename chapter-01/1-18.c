#include <stdio.h>

#define MAXLENGTH 1000

int get_line(char *str, int lim);

int main(void) {
    int ret;
    char line[1000];

    while ((ret = get_line(line, MAXLENGTH)) != 1) {
        printf("%s\n", line);
        line[0] = '\0';
    }

    return 0;
}

int get_line(char *str, int lim) {
    int c, i;
    
    i = 0;
    while (i < lim - 1 && (c = getchar()) != EOF && c != '\n') {
        if (c != ' ' && c != '\t')
            str[i++] = c;
    }
    if (c == EOF)
        return 1;

    str[i] = '\0';

    return 0;
}
