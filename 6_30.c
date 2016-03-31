#include <stdio.h>
#include <string.h>
void palindrom(char A[]);
main()
{
	char str[50];
	printf("Enter a string\n");
	gets(str);
	palindrom(str);

}	
void palindrom(char A[])
{
	char S[50];
	int l=strlen(A)-1;
	int i,j,f=0;
	for(i=0,j=l;j>=0;j--,i++)
		S[i]=A[j];
	for(i=0;i<=l;i++)
	{
		if(S[i]!=A[i])
		{
			f=1;
			break;
		}
	}
	if(f==1)
		printf("Not a palindrom\n");
	else
		printf("Palindrom\n");
} 
