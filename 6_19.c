#include <stdio.h>
void input(int D[][10],int m,int n);
void multiply(int D[][10],int E[][10],int F[][10],int m,int n,int p,int q);
void display(int D[][10],int m,int n); 
main()
{
	int m, n, p, q;
	printf("Enter the size of the matrix A\n");
	scanf("%d%d",&m,&n);
	int A[m][n];
	input(A,m,n); 
	printf("Enter the size of the matrix B\n");
	scanf("%d%d",&p,&q);
	int B[p][q];
	input(B,p,q);
	int C[m][q];
	display(A,m,n);
	display(B,p,q);
	multiply(A,B,C,m,n,p,q);
}
void input(int D[][10],int m,int n)
{
	printf("Enter the elements \n");
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&D[i][j]);
		}  
	}	
}
void multiply(int D[][10],int E[][10],int F[][10],int m,int n,int p,int q)
{
	int i,j,k;
	if(n!=p)
	{
		printf("The matrices cannot be multiplied\n");
		return;
	}
	else
	{
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				F[i][j]=0;
				for(k=0;k<n;k++)
				{
					F[i][j]+=D[i][k]*E[k][j];
				}
			}
		}
		display(F,m,q);
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
