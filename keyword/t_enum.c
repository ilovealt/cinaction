#include <stdio.h>

enum WEEK
{
    Mon = 1,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};

typedef enum
{
    Jan = 1,
    Feb,
    Mar,
    Apr,
    May,
    Jun,
    Jul,
    Aug,
    Sep,
    Oct,
    Nov,
    Dec
} Month;

int main()
{
    // 实践出真知
    enum WEEK day;
    day = Wed;
    printf("*** %d\n", day);
    Month month;
    month = Jul;
    printf("*** %d\n", month);
    return 0;
}