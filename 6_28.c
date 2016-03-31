#include <stdio.h>
#include <string.h>
void concatenate(char s[],char A[]);
main()
{
	char str[50];
	char S[100];
	char D[100];
	printf("Enter a string\n");
	gets(str);
	printf("Enter a string\n");
	gets(S);
	strcpy(D,S);
	concatenate(S,str);
	strcat(D,str);
	printf("concatenated string = %s\n",S);
	printf("concatenated string using strcat() = %s\n",D);

}	
void concatenate(char s[],char A[])
{
	int i,j;
	for(j=0;s[j]!='\0';j++);
	for(i=0;A[i]!='\0';i++,j++)
	{
		s[j]=A[i];
	}
	s[j]='\0';
} 
