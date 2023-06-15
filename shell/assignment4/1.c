#include <stdio.h>

int main() {
    int line_count = 0;
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            line_count++;
        }
    }
    printf("Number of lines in file: %d\n", line_count);
    return 0;
}
