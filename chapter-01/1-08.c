#include <stdio.h>

int main() {
    int c, bc, tc, nlc;

    bc = tc = nlc = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') ++nlc;
        else if (c == '\t') ++tc;
        else if (c == ' ') ++bc;
    }

    printf("%d %d %d\n", bc, tc, nlc);

    return 0;
}
