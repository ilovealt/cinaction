#include <stdio.h>

#define DEBUG 1

int main(int argc, char const *argv[])
{
    int i = 8, j = 12;
#if DEBUG
    printf("on line %d of file %s\n", __LINE__, __FILE__);
    printf("Value of i=%d\n", i);
    printf("Value of j=%d\n", j);
#endif

#if !DEBUG
    printf("DEBUG is not defined\n");
#else
    printf("DEBUG is defined\n");
#endif

#if defined(DEBUGGER)
    printf("DEBUGGER is defined\n");
#endif

#if !defined(DEBUGGER)
    printf("DEBUGGER is not defined\n");
#endif

    return 0;
}
