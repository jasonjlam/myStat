#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

void printstat(char path[100]) {
    struct stat *file;
    stat(path, file);
    printf("Size: %ld \n", file->st_size);

}
