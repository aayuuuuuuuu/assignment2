#include <stdio.h>
#include <string.h>

int main()
{
char s1[100] ;
    printf("enter your string\n");
    gets(s1);
    char s2[100] ;
    printf("enter your string\n");
    gets(s2);

	
	strcat(s1, s2);
	printf("Final string is: %s ", s1);
	return 0;
}
