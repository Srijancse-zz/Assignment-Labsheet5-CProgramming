#include <stdio.h>
#include <string.h>
int compare(char s[],char A[]);
main()
{
	char str[50];
	char S[100];
	printf("Enter a string\n");
	gets(str);
	printf("Enter a string\n");
	gets(S);
	printf("concatenated string = %d\n",compare(str,S));
	printf("concatenated string using strcmp() = %d\n",strcmp(str,S));

}	
int compare(char s[],char A[])
{
	int i;
	for(i=0;A[i]!='\0'&&s[i]!='\0';i++)
	{
		if(s[i]==A[i])
			continue;
		else if(s[i]<A[i])
			return -1;
		else
			return 1;
	}
	if(A[i]=='\0'&&s[i]=='\0')
		return 0;
	else if(s[i]=='\0')
		return -1;
	else
		return 1;
} 
