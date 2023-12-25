#include <stdio.h>

int main()
{
    int a = 22;
    int *ptr = &a;
    printf("ptr = %u\n", ptr); 
    ptr++;
    printf("ptr++ = %u\n", ptr);   
    ptr--;
    printf("ptr-- = %u\n", ptr);
    return 0;
    }