#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    printf("Error messages in c are->>\n\n");
	for(int i=1;i<14;i++){
	    printf("%d ->> %s\n",i,strerror(i));
	}
	return 0;
}
