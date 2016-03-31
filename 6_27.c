#include <stdio.h>
#include <string.h>
int upper(char s[]);
main()
{
	char str[50];
	printf("Enter a string\n");
	gets(str);
	upper(str);
	printf("new string = %s\n",str);
}	
int upper(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			s[i]-=32;
	}
} 
