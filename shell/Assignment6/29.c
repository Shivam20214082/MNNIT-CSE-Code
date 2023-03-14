#include <stdio.h>
#include <sys/stat.h>

int main() {
    printf("enter file name -> ");
    char a[100];
    scanf("%s",a);
    const char *filename = a;
    struct stat st;

    if (stat(filename, &st) == -1) {
        printf("Error: Could not stat file\n");
        return 1;
    }

    printf("File permissions:\n");
    printf("User read: %s\n", (st.st_mode & S_IRUSR) ? "yes" : "no");
    printf("User write: %s\n", (st.st_mode & S_IWUSR) ? "yes" : "no");
    printf("User execute: %s\n", (st.st_mode & S_IXUSR) ? "yes" : "no");
    printf("Group read: %s\n", (st.st_mode & S_IRGRP) ? "yes" : "no");
    printf("Group write: %s\n", (st.st_mode & S_IWGRP) ? "yes" : "no");
    printf("Group execute: %s\n", (st.st_mode & S_IXGRP) ? "yes" : "no");
    printf("Other read: %s\n", (st.st_mode & S_IROTH) ? "yes" : "no");
    printf("Other write: %s\n", (st.st_mode & S_IWOTH) ? "yes" : "no");
    printf("Other execute: %s\n", (st.st_mode & S_IXOTH) ? "yes" : "no");
    printf("Set user ID: %s\n", (st.st_mode & S_ISUID) ? "yes" : "no");
    printf("Set group ID: %s\n", (st.st_mode & S_ISGID) ? "yes" : "no");
    printf("Sticky bit: %s\n", (st.st_mode & S_ISVTX) ? "yes" : "no");

    return 0;
}
