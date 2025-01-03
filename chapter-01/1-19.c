#include <stdio.h>

#define MAXLENGTH 1000

int get_line(char *str, int lim);
void reverse(char *str, int len);

int main() {
    int ret;
    char line[MAXLENGTH];

    while ((ret = get_line(line, MAXLENGTH)) != -1) {
        if (ret > 1) {
            reverse(line, ret);
        }
        printf("%s\n", line);
    }

    return 0;
}

int get_line(char *str, int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
        str[i] = c;
    if (c == EOF)
        return -1;

    str[i] = '\0';
    
    return i;
}

void reverse(char *str, int len) {
    int i, j;
    char c;
    
    i = 0;
    j = len - 1;
    while (i < j) {
        c = str[i];
        str[i] = str[j];
        str[j] = c;
        i++;
        j--;
    }
}

