#include <stdio.h>
void input(int D[][10],int m,int n);
void search(int D[][10],int m,int n,int *p,int *q,int key);
void display(int D[][10],int m,int n); 
main()
{
	int m, n, p=-1, q=-1,key;
	printf("Enter the size of the matrix A\n");
	scanf("%d%d",&m,&n);
	int A[m][n];
	input(A,m,n); 
	display(A,m,n);
	printf("Enter the element to be searched\n");
	scanf("%d",&key);
	search(A,m,n,&p,&q,key);
	if(p!=-1)
	printf("The element is row %d and column %d\n",p+1,q+1); 
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
void search(int D[][10],int m,int n,int *p,int *q,int key)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(D[i][j]==key)
			{
				*p=i;
				*q=j;
				break;
			}
		}
		if(*p!=-1)
		break;
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
