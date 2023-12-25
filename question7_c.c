#include <stdio.h>
#include <string.h>
int main()
{
   FILE *fptr;
   char str[50];
 
   fptr = fopen("student.txt", "a");
 
   printf("Enter your message:");
   gets(str);
 
   fprintf(fptr, "%s",str);
 
   fclose(fptr);
   return 0;
}
