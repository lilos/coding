#include <stdio.h>

typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len) {
    size_t i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer)&x, sizeof(int));
}

int main(int argc, char *argv[])
{
    printf("%d\n", (int) argv[1]);
    int ival = 12345;
    //float fvar = (float) ival;
    //int *pval = &ival;
    show_int(ival);
}
