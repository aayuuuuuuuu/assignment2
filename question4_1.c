#include <stdio.h>
#include <string.h>

int main()
{
    char str[100] ;
    printf("enter your string\n");
    gets(str);
	
	int i= 0;
	int j = strlen(str) - 1;

	while (j > i) {
		if (str[i++] != str[j--]) {
			printf("%s is not a palindrome\n", str);
			return 0;
		}
	}

	printf("%s is a palindrome\n", str);

	return 0;
}
