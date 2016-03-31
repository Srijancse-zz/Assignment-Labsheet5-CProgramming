#include <stdio.h>
#include <string.h>
int lenght(char s[]);
main()
{
	char str[50];
	printf("Enter a string\n");
	gets(str);
	printf("The length of string = %d\n",length(str));
	printf("The length of string using strlen() = %d\n",(int)strlen(str));

}	
int length(char s[])
{
	int i,l=0;
	for(i=0;s[i]!='\0';i++)
	{
		l++;
	}
return l;
} 
