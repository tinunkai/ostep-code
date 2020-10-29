#include <stdio.h>
#include <unistd.h>


int main(int argc, char *argv[])
{
    int pid = fork();
    if (pid < 0) {
        fprintf(stderr, "fork faile\n");
    } else if (pid == 0) {
        printf("%d\n", pid);
    } else if (pid > 0) {
        printf("%d\n", pid);
    }
    return 0;
}

