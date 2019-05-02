// Write another program using `fork()`. The child process should print "hello";
// the parent process should print "goodbye". You should ensure that the child
// process always prints first.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
    // Your code here
    int my_fork = fork();
    wait(NULL);
    if (my_fork == 0)
    {
        printf("Child -> Hello \n");
    }
    else
    {
        printf("Parent -> Goodbye \n");
    }
    return 0;
}
