#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char s[100], d[100];
    printf("Enter source file path: ");
    scanf("%s", s);
    printf("Enter destination file path: ");
    scanf("%s", d);

    FILE *sf = fopen(s, "rb");
    if (sf == NULL) {
        printf("Error: Could not open source file\n");
        return 1;
    }

    FILE *df = fopen(d, "wb");
    if (df == NULL) {
        printf("Error: Could not open destination file\n");
        fclose(sf);
        return 1;
    }

    fseek(sf, 0, SEEK_END);
    long file_size = ftell(sf);
    char *buffer = (char *)malloc(file_size);
    if (buffer == NULL) {
        printf("Error: Memory allocation failed\n");
        fclose(sf);
        fclose(df);
        return 1;
    }

    fseek(sf, 0, SEEK_SET);
    size_t bytes_read = fread(buffer, 1, file_size, sf);
    if (bytes_read != file_size) {
        printf("Error: Could not read source file\n");
        free(buffer);
        fclose(sf);
        fclose(df);
        return 1;
    }

    for (long i = file_size - 1; i >= 0; i--) {
        fputc(buffer[i], df);
    }

    fclose(sf);
    fclose(df);
    free(buffer);

    printf("File written in reverse order successfully.\n");
    return 0;
}
