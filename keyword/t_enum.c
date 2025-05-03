#include <stdio.h>

enum WEEK
{
    Mon,
    Tue,
    Wed,
    Thur,
    Fri,
    Sat,
    Sun
};

int main()
{
    enum WEEK day;
    day = Wed;
    printf("*** %d\n", day);
    return 0;
}