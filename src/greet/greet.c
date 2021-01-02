#include <stdio.h>
#include <string.h>

void greet(void)
{
    puts("Hello World!");
}

int greet_n(int n)
{
    const char *const str = "Hello World!";
    const int chars = strlen(str);
    for (int i = 0; i < n; i++)
    {
        puts("Hello World!");
    }
    return chars * n;
}
