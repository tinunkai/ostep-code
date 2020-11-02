#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int fd = open("tmp.md", O_WRONLY|O_CREAT|O_TRUNC, 0644);

    int pid = fork();
    if (pid < 0) {
        fprintf(stderr, "fork faile\n");
    } else if (pid == 0) {
        char *buf = "foobar\n";
        ssize_t cnt = strlen(buf);
        write(fd, buf, cnt);
        printf("c: %d\n", fd);
    } else if (pid > 0) {
        char *buf = "barfoo\n";
        ssize_t cnt = strlen(buf);
        write(fd, buf, cnt);
        printf("p: %d\n", fd);
    }
    return 0;
}

