#include <stdio.h>
#include <stdlib.h>
#include <sys/unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
 //   char b; 
 //   char  a[]="test";
    for(i;i<argc;i++)
        printf("argv[ %d ] : %s\n",i,argv[i]);
    
    printf("env : %s\n",getenv("PWD"));

    exit(0);

}
