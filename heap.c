#include <stdio.h>

float f;

char* alloc(int i) 
{
    char* rc;
    rc = (char*)malloc(i);
    printf("0x%08x\n",rc);
    return rc;
}

int main()
{
    char* rc;
    f=0;
    while(1)
    {
        rc = alloc(100);
        free(rc);
        ++f;
        printf( "%d\n", f );
    }
}
