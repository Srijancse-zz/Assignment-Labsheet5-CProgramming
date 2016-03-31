#include <stdio.h>
#include <string.h>
main()
{
	char str[50];
	printf("Enter a string\n");
	scanf("%s",str);
	printf("%s\n",str);
	printf("Enter a string\n");
	getchar();
	gets(str);
	printf("%s\n",str);
	printf("Enter the length of string\n");
	int l;
	scanf("%d",&l);
	int i;
	printf("Enter a string\n");
	for(i=0;i<l;i++)
		str[i]=getchar();
	str[i]='\0';
	printf("%s\n",str);
}		
