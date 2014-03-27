int accum = 0;

int sum(int x, int y)
{
    int t = x+y;
    accum += t;
    return t;

}

#include <stdio.h>

int fun1()
{
    printf("Hello World !!\n");
}

char *fun2(char *test)
{
    return test;
}
