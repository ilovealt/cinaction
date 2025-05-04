#include <stdio.h>

#define NDEBUG // Disable assertions
#include <assert.h>

int main(int argc, char const *argv[])
{
    int i = 6;
    assert(i == 5); // This assertion will fail
    printf("Assertion passed!\n");
    return 0;
}
