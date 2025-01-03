#include <stdio.h>

#define MAXLENGTH 1000

int get_line(char *str, int lim);
int strlen(char *str);

int main() {
    int ret;
    char line[MAXLENGTH];

    while ((ret = get_line(line, MAXLENGTH)) != 1) {
        if (strlen(line) > 5) {
            printf("%s", line);
        }
    }
    return 0;
}

int get_line(char *str, int lim) {
    int c, i;

    for (i = 0; i < (lim - 1) && (c = getchar()) != EOF && c != '\n'; i++)
        str[i] = c;
    if (c == EOF)
        return 1;
    else if (c == '\n')
        str[i] = c;
        i++;
    str[i] = '\0';

    return 0;
}

int strlen(char *str) {
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    
    return i;
}
