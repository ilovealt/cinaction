#include <stdio.h>

#define NDEBUG // Disable assertions,这两个有顺序
#include <assert.h>

#define PI 3.14159265358979323846
#define MAX(x, y) ((x) > (y) ? (x) : (y))

// #运算符 将宏参数转换为字符串
#define PRINT(x) printf(#x " = %d!\n", x)

// ##运算符 将宏参数连接在一起
#define GENERIC_MAX(type)           \
    type type##_max(type x, type y) \
    {                               \
        return x > y ? x : y;       \
    }

GENERIC_MAX(int)

int main(int argc, char const *argv[])
{
    int i = 6;
    assert(i == 5); // This assertion will fail
    printf("1.Assertion passed!\n");

    printf("2.常量 PI:%.10lf!\n", PI);

    int j = 5, k = 13, m = 29, n = 8;
    int max = MAX(j + k, m + n);
    printf("3.最大值: %d!\n", max);

    PRINT(i);

    int generic_max = int_max(5, 10);
    printf("4.最大值: %d!\n", generic_max);

    return 0;
}
