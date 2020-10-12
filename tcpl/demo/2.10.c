#include <stdio.h>

int bitcount(unsigned x);

int main(void)
{
    int num = 3;
    printf("%d\n", bitcount(num));
}

int bitcount(unsigned x)
{
    int b;
    for (b = 0; x != 0; x >>=1)
        if (x & 01)
            b++;
    return b;
}
