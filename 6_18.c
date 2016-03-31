#include <stdio.h>
void input(int D[][10],int m,int n);
void display(int D[][10],int m,int n); 
main()
{
	int m, n;
	printf("Enter the size of the matrix\n");
	scanf("%d%d",&m,&n);
	int A[m][n];
	input(A,m,n);
	display(A,m,n);
}
void input(int D[][10],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j)
				D[i][j]=1;
			else if(i==j)
				D[i][j]=0;
			else
				D[i][j]=-1;
		}  
	}	
}
void display(int D[][10],int m,int n)
{
	printf("The elements of the matrix are\n");
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",D[i][j]);
		}
		printf("\n");
	}
}
