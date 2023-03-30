#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main()
{
    int fd;
    fd = open("./test.txt", O_RDONLY);
    printf("%s", get_next_line(fd));
    close(fd);
}