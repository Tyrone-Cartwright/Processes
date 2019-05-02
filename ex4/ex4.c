// Write a program that calls `fork()` and then calls some form of `exec()`
// to run the program `/bin/ls`. Try a few variants of `exec()`, such as
// `execl()`, `execle()`, `execv()`, and others. Why do you think there
// are so many variants of the same basic call?

// Which ever one you use depends on how many args you need in the fn call

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
    // Your code here
    pid_t pid = fork();

    if (pid == 0)
    {
        char *args[] = {"ls", "-1", NULL};
        execv("/bin/ls", args);
    }
    else
    {
        printf("This is the parent process\n");
    }

    return 0;
}
