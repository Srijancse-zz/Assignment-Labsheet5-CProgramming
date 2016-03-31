#include <stdio.h>
#include <string.h>
main()
{
	char str[50];
	printf("Enter a string\n");
	gets(str);
	printf("%s\n",str);
	printf("Enter a string\n");
	gets(str);
	puts(str);
	printf("Enter a string\n");
	gets(str);
	int i;
	for(i=0;str[i]!='\0';i++)
		putchar(str[i]);
}		
