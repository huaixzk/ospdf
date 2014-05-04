#include <stdio.h>
#include <sys/unistd.h>
#include <stdlib.h>

int main()
{
    pid_t pid;
    int x = 1;

    pid = fork();
    if(pid == 0)
    {
        // child 
        printf("child : x = %d\n",++x);
        exit(0);
    }

    // parent
    printf("parent : x = %d\n",--x);
    exit(0);

}
