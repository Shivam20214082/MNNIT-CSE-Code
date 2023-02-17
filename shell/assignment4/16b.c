#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    struct dirent *dp;
    printf("enter the directory path\n");
    char a[500];
    scanf("%s",a);
    DIR *dir = opendir(a);

    if (dir == NULL)
    {
        perror("opendir");
        return 1;
    }

    while ((dp = readdir(dir)) != NULL)
    {
        printf("%s\n", dp->d_name);
    }

    closedir(dir);
    return 0;
}
