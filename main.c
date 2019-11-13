#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "stat.h"

int main() {
    printstat("/dev/random");
    return 0;
}
