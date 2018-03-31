/**
 * A. 子进程的输出是什么?
 *      p1: x=2
 *      p2: x=1
 * 
 * ----------
 * 
 * B. 父进程的输出是什么?
 *      p2: x=0
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

pid_t Fork(void);
void unix_error(char*);

pid_t Fork(void) {
    pid_t pid;

    if ((pid = fork()) < 0) {
        unix_error("fork error");
    }

    return pid;
}

void unix_error(char *msg) {
    fprintf(stderr, "%s:%s\n", msg, strerror(errno));
    exit(0);
}

int main() {
    int x = 1;

    if (Fork() == 0) {
        printf("p1: x=%d\n", ++x);
    }

    printf("p2: x=%d\n", --x);

    exit(0);
} 


