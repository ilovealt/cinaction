#include <stdio.h>
#include <setjmp.h>

jmp_buf env;

void f1();
void f2();

int main(int argc, char const *argv[])
{
    if (setjmp(env) == 0)
    {
        printf("setjmp returns 0\n");
    }
    else
    {
        printf("Program terminates: longjmp called 1\n");
        return 0;
    }

    f1();
    printf("Program terminates normally\n");
    return 0;
}

void f1()
{
    printf("f1 begins\n");
    f2();
    printf("f1 returns\n");
}

void f2()
{
    printf("f2 begins\n");
    longjmp(env, 1);
    printf("f2 returns\n");
}