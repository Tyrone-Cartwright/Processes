// Write a program that opens the text.txt file (with the `fopen()` library call) located in this directory
// and then calls `fork()` to create a new process. Can both the child and parent access the file descriptor
// returned by `fopen()`? What happens when they are written to the file concurrently?

// Yes both the child and parent can access the file descriptor
// They both get written in

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    // Your code here
    FILE *file;
    file = fopen("text.txt", "r+");

    if (fork() == 0)
    {
        fprintf(file, "%s", "The child!");
        printf("child: %d\n", fileno(file));
    }
    else
    {
        fprintf(file, "%s", "The parent ");
        printf("parent %d\n", fileno(file));
    }
    fclose(file);
    return 0;

    return 0;
}
