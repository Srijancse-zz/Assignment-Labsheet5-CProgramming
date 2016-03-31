#include <stdio.h>
#include <string.h>
int copy(char s[],char A[]);
main()
{
	char str[50];
	char S[50];
	char D[50];
	printf("Enter a string\n");
	gets(str);
	copy(S,str);
	strcpy(D,str);
	printf("copied string = %s\n",S);
	printf("copied string using strcpy() = %s\n",D);

}	
int copy(char s[],char A[])
{
	int i;
	for(i=0;A[i]!='\0';i++)
	{
		s[i]=A[i];
	}
	s[i]='\0';
} 
