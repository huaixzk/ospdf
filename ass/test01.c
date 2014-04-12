#include <stdio.h>
#include "exchange.h"

int main()
{
    int a = 4;
    int b = exchange(&a,3);
    printf("a = %d,\tb = %d\n",a,b);
}
