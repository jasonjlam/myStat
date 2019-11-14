#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

void printstat(char path[100]) {
    struct stat file;
    printf ("%d \n", stat(path, &file));
    printf("Printing statistics on %s \n", path);
    printf("Size: %ld \n", file.st_size);
    printf("File permissions/mode: %d \n", file.st_mode);
    printf("Time of last access: %s \n", ctime(&file.st_atime));

}
