#include <stdio.h>
#include <string.h>

#define TITLE_LEN 50
#define AUTHOR_LEN 50
#define DESIGN_LEN 50

struct catalog_item
{
    int stock_number;
    double price;
    int item_type;
    union
    {
        struct
        {
            char title[TITLE_LEN + 1];
            char author[AUTHOR_LEN + 1];
            int num_pages;
        } book;
        struct
        {
            char design[DESIGN_LEN + 1];
        } mug;
        struct
        {
            char design[DESIGN_LEN + 1];
            int colors;
            int sizes;
        } shirt;
    } item;
};

// 1.需要数组的元素是 int 值和 double 值的混合
typedef union
{
    int i;
    double d;
} Number;

int main(int argc, char const *argv[])
{

    struct catalog_item catalog[3] = {
        {1, 12.99, 1, .item.book = {"The C Programming Language", "Brian W. Kernighan", 272}},
        {2, 8.99, 2, .item.mug = {"Coffee Mug"}},
        {3, 19.99, 3, .item.shirt = {"T-Shirt", 5, 3}}};
    printf("Catalog Item 1, book.title : %s\n", catalog[0].item.book.title);

    struct catalog_item c = {1, 12.99, 1};
    strcpy(c.item.mug.design, "Cats");

    printf("%s\n", c.item.mug.design);   /* prints "Cats" */
    printf("%s\n", c.item.shirt.design); /* prints "Cats" */

    // 2.创建一个数组，使数组的元素是 Number 类型的值：
    Number number_array[1000];
    // 3.赋值语句可以达到期望的效果：
    number_array[0].i = 5;
    number_array[1].d = 8.395;

    printf("number_array[0].i = %d\n", number_array[0].i);
    printf("number_array[1].d = %f\n", number_array[1].d);

    return 0;
}
