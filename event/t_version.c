#include <stdio.h>
#include <event.h>

/**
 * @brief 该程序演示了如何使用 Libevent 库来获取当前使用的 Libevent 版本。
 * gcc -o t_version t_version.c -levent
 * 这里的 -levent 选项告诉编译器链接 Libevent 库。
 */
int main(int argc, char const *argv[])
{
    printf("链接系统的Libevent库!\n");
    const char *version = event_get_version();
    printf("当前使用的 Libevent 版本是: %s\n", version);
    return 0;
}