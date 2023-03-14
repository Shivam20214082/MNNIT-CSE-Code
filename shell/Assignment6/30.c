#include <stdio.h>
#include <sys/stat.h>
#include <unistd.h>

int main() {
    printf("enter file name -> ");
    char a[100];
    scanf("%s",a);
    const char *filename =a;
    struct stat st;

    if (stat(filename, &st) == -1) {
        printf("Error: Could not stat file\n");
        return 1;
    }

    uid_t uid = getuid();  // Get current user's UID
    gid_t gid = getgid();  // Get current user's GID

    printf("File access:\n");
    printf("User has read permission: %s\n", (st.st_uid == uid && (st.st_mode & S_IRUSR)) ? "yes" : "no");
    printf("User has write permission: %s\n", (st.st_uid == uid && (st.st_mode & S_IWUSR)) ? "yes" : "no");
    printf("User has execute permission: %s\n", (st.st_uid == uid && (st.st_mode & S_IXUSR)) ? "yes" : "no");
    printf("Group has read permission: %s\n", (st.st_gid == gid && (st.st_mode & S_IRGRP)) ? "yes" : "no");
    printf("Group has write permission: %s\n", (st.st_gid == gid && (st.st_mode & S_IWGRP)) ? "yes" : "no");
    printf("Group has execute permission: %s\n", (st.st_gid == gid && (st.st_mode & S_IXGRP)) ? "yes" : "no");
    printf("Other has read permission: %s\n", ((st.st_mode & S_IROTH)) ? "yes" : "no");
    printf("Other has write permission: %s\n", ((st.st_mode & S_IWOTH)) ? "yes" : "no");
    printf("Other has execute permission: %s\n", ((st.st_mode & S_IXOTH)) ? "yes" : "no");

    return 0;
}
