#include <stdio.h>
#include <stdlib.h>
#include <sys/unistd.h>

int main()
{
    int x = 1;
    if(fork()==0)
        printf("printf : %d\tpid : %d\n",++x,getpid());
    printf("printf2 : %d\tpid: %d\n",--x,getpid());
    exit(0);
}
