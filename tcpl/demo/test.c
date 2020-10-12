#ifdef __STDC_ALLOC_LIB__

#define __STDC_WANT_LIB_EXT2__ 1
#else
#define _POSIX_C_SOURCE 200809L
#endif
 
#include <string.h>
#include <assert.h>
#include <stdlib.h>
 
int main(void)
{
    const char *s1 = "String";
    char *s2 = strdup(s1);
    assert(strcmp(s1, s2) == 1);
    free(s2);
}

//#include <stdio.h>
//void ts(int a);
//
//int main(void)
//{
//    int a = 1;
//    ts(a);
//    ts(a++);
//}
//
//void ts(int a)
//{
//    printf("%d\n", a);
//}

//#include <ctype.h>
//
//int main(void)
//{
//    int i, j;
//    char aa[10] = "123.23";
//    char ss[10];
//    i = j = 0;
//    while(isdigit(ss[i++] = aa[j++]))
//        ;
//    // ss[i] = '\0';
//    printf("%s\n", ss);
//}
