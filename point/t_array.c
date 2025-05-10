#include <stdio.h>

#define N 10

int main(int argc, char const *argv[])
{
    int a[N] = {11, 34, 64, 24, 80, 26, 2, 9, 0, 2};
    int sum = 0, *p;
    // 也可以进行 p = a 这样的赋值
    // 也可以进行 p = &a[0] 这样的赋值
    for (p = &a[0]; p < &a[N]; p++)
    {
        sum += *p;
    }
    printf("sum = %d\n", sum);

    return 0;
}