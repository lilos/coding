#include <stdio.h>

int atoi(char s[]);
int lower(int c);

int main(void)
{
    char s[] = "1";
    char c = 'B';
    printf("%d\n", atoi(s));
    printf("%c\n", lower(c));
}

// 数字字符串转数字
int atoi(char s[])
{
    int i, n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i] - '0');
    return n;
}

// 字符c转换为小写形式，A:65,a:97
int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
}
