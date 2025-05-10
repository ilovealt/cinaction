#include <stdio.h>

#define N 10

// 全局数组（静态存储期）
int global_array[N]; // 全局变量，初始化为0

int main(int argc, char const *argv[])
{
    // 数组初始化时，数组元素的值是未定义的
    int i;
    static int static_array[N]; // 局部静态变量（静态存储期），初始化为0
    int local_array[N];         // 局部变量，初始化为未定义
    int init_array[N] = {0};    // 局部变量，初始化为0

    printf("****** 静态 全局 ******\n");
    for (i = 0; i < N; i++)
    {
        printf("****** global_array[%d]=%d\n", i, global_array[i]);
    }
    printf("****** 静态 局部 ******\n");
    for (i = 0; i < N; i++)
    {
        printf("****** static_array[%d]=%d\n", i, static_array[i]);
    }
    printf("****** 局部 未初始化******\n");
    for (i = 0; i < N; i++)
    {
        printf("****** local_array[%d]=%d\n", i, local_array[i]);
    }
    printf("****** 局部 初始化******\n");
    for (i = 0; i < N; i++)
    {
        printf("****** init_array[%d]=%d\n", i, init_array[i]);
    }
    printf("\n");

    int a[N] = {}; // 局部变量，初始化为0
    int *p, *q;
    p = &a[0];
    *p = 5;
    printf("****** a[0]=%d\n", a[0]);
    printf("****** a[0]=%d\n", *p);
    printf("\n");

    p = &a[2];
    q = p + 3;
    p += 6;
    printf("****** a[2+6]=%d\n", *p);
    printf("****** a[2+3]=%d\n", *q);
    printf("\n");

    return 0;
}