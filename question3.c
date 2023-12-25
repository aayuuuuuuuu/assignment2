// reverse a string without using library functions
#include<stdio.h>
#include<string.h>
int main(){
    char str[100],newstr[100];
    int i,j,len;
    printf("enter your string");
    gets(str);
    j=0;
    len=strlen(str);
    for(i=len-1;i>=0;i--){
        newstr[j++]=str[i];
    }
    newstr[i] = '\0';
  	printf("\n String after Reversing = %s", newstr); 	
  	return 0;

}