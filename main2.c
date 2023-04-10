#include "get_next_line_bonus.h"
#include <fcntl.h>
#include <stdio.h>
#define BUFFER_SIZE 10
int main()
{
    int fd = open("./test1.txt", O_RDONLY);
    int fd2 = open("./test2.txt", O_RDONLY);
    int fd3 = open("./test3.txt", O_RDONLY);
    char *n10 = get_next_line(fd);
    printf("1-1 => %s\n", n10);
    char *n20 = get_next_line(fd2);
    printf("2-1 => %s\n", n20);
    char *n30 = get_next_line(fd3);
    printf("3-1 => %s\n", n30);
    char *n11 = get_next_line(fd);
    printf("1-2 => %s\n", n11);
    char *n21 = get_next_line(fd2);
    printf("2-2 => %s\n", n21);
    char *n31 = get_next_line(fd3);
    printf("3-2 => %s\n", n31);
}

