#include <stdio.h>
#include <dirent.h>

int main()
{
    printf("enter path of directory\n");
    char a[100];
    scanf("%s",a);
    DIR *dir = opendir(a);
    if (dir == NULL)
    {
        printf("Error: Could not open directory\n");
        return 1;
    }

    struct dirent *d;
    while ((d = readdir(dir)) != NULL)
    {
        printf("%s\n", d->d_name);
    }

    closedir(dir);
    return 0;
}
