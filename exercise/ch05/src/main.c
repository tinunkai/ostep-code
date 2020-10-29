#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main(int argc, char *argv[])
{
    int foo = 3;

    int pid = fork();
    if (pid < 0) {
        fprintf(stderr, "fork faile\n");
    } else if (pid == 0) {
        foo = 4;
        creat("tmp", O_CREAT);
        printf("c: %d\n", foo);
    } else if (pid > 0) {
        foo = 2;
        printf("p: %d\n", foo);
    }
    return 0;
}

