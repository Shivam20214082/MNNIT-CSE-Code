#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    char s[100], d[100];
    printf("Enter source file path: ");
    scanf("%s", s);
    printf("Enter destination file path: ");
    scanf("%s", d);

    int sf = open(s, O_RDONLY);
    if (sf == -1) {
        printf("Error: Could not open source file '%s'\n", s);
        return 1;
    }

    int df = open(d, O_WRONLY | O_CREAT | O_TRUNC, 0666);
    if (df == -1) {
        printf("Error: Could not open destination file '%s'\n", d);
        close(sf);
        return 1;
    }

    char buffer[1024];
    ssize_t bytes_read;
    while ((bytes_read = read(sf, buffer, sizeof(buffer))) > 0) {
        if (write(df, buffer, bytes_read) != bytes_read) {
            printf("Error: Could not write to destination file '%s'\n", d);
            close(sf);
            close(df);
            return 1;
        }
    }

    if (bytes_read == -1) {
        printf("Error: Could not read from source file '%s'\n", s);
        close(sf);
        close(df);
        return 1;
    }

    close(sf);
    close(df);

    printf("File copied successfully.\n");
    return 0;
}
