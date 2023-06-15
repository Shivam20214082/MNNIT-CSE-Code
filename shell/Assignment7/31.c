#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <utime.h>

int main() {
   struct stat statbuf;
   struct utimbuf timebuf;

   const char* src_path = "35.c";
   const char* dst_path = "31.c";

   if (stat(src_path, &statbuf) == -1) {
      perror("stat");
      return 1;
   }

   timebuf.actime = statbuf.st_atime;
   timebuf.modtime = statbuf.st_mtime;
   if (utime(dst_path, &timebuf) == -1) {
      perror("utime");
      return 1;
   }

   printf("File time stamp has been updated successfully.\n");

   return 0;
}
