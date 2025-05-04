#include <stdio.h>

#define NAME_LEN 20

struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} var1 = {1, "engine", 10};

struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} var2 = {2, "wheel", 20};

struct part
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} part1, part2;

struct employee
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} employee1, employee2;

/**
 * @brief 结构体变量的定义
 * 1.学习结构体初始化，使用指示器初始化；
 * 2.三个结构体变量都是占用32字节的内存空间；
 *     int类型占用4字节，char占用1个字节，按理说应该是4+21+4=29字节；
 *     结构体变量的对齐方式是4字节对齐，所以name实际占用了24字节，导致结构体变量的大小是32字节；
 */
struct fruit
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} fruit1, fruit2 = {1, "apple", 10}, fruit3 = {.number = 2, "banana", .on_hand = 20};

typedef struct Car
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} car1, car2;

typedef struct
{
    int number;
    char name[NAME_LEN + 1];
    int on_hand;
} Bus1, Bus2;

/*
1. 相同结构体之间的复制（内含数组）
2. 不同结构体之间的复制（成员相同，内含数组）
*/
int main(int argc, char const *argv[])
{
    // 结构体变量的初始化
    struct part part1 = {1, "engine", 10};
    struct part part2 = {2, "wheel", 20};

    printf("part1.number = %d\n", part1.number);
    printf("part1.name = %s\n", part1.name);
    printf("part1.on_hand = %d\n", part1.on_hand);

    part1 = part2; // 结构体变量的复制

    printf("part1.number = %d\n", part1.number);
    printf("part1.name = %s\n", part1.name);
    printf("part1.on_hand = %d\n", part1.on_hand);

    struct employee employee1 = {1, "zhangsan", 10};

    // 结构体变量的复制会报错，因为结构体变量的类型不一致(都是匿名结构体也不可以)
    // part1 = employee1;
    // var1 = var2;

    // 计算结构体变量的大小
    printf("sizeof(fruit1) = %zu\n", sizeof(fruit1));
    printf("sizeof(fruit2) = %zu\n", sizeof(fruit2));
    printf("sizeof(fruit3) = %zu\n", sizeof(fruit3));

    // 结构体标记和结构体类型同时使用的时候，
    // Car是结构标记
    // car1和car2是结构类型
    // Car car11 = {1, "BMW", 10};
    struct Car car01 = {2, "Benz", 20};
    car1 car11 = {1, "BMW", 10};
    car2 car21 = {2, "Benz", 20};
    car11 = car21;
    car11 = car01;
    // 结构体类型
    Bus1 bus11 = {2, "Benz", 20};
    Bus2 bus21 = {1, "BMW", 10};

    return 0;
}
