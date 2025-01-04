#include <stdio.h>

#define LENGTH 9

int main() {
    int c, wc;
    int wl[LENGTH];
    
    wc = 0;
    for (int i = 0; i < 9; i++) wl[i] = 0;
    while ((c = getchar()) != EOF) {
        while (c != ' ' && c != '\n' && c != '\t' && ((c = getchar()) != EOF)) {
            wc++;
        }
        if (wc > 0 && wc < 9)
            wl[wc - 1]++;
        else if (wc >= 9)
            wl[LENGTH - 1]++;
        wc = 0;
    }
    
    for (int i = LENGTH; i > 0; i--) {
        printf("%d ", i);
        for (int j = 0; j < wl[i - 1]; j++) {
            putchar('|');
        }
        putchar('\n');
    }

    return 0;
}
