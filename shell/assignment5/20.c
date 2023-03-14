#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    while (1)
    {
        time_t current_time = time(NULL);
        printf("Current time: %s", ctime(&current_time));
        sleep(60);
    }
    return 0;
}
