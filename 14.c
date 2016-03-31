//18.03.2016 14.20

#include<stdio.h>
#include <stdlib.h>
void readarr(int a[100][100],int m, int n);
void printarr(int a[100][100],int m, int n);
int addarr(int a[100][100],int b[100][100],int c[100][100],int m, int n);
int main()
{
 int a[100][100],b[100][100],c[100][100],m, n, i = 0, j;
 printf("Enter the rows and columns of array\n");
 scanf("%d %d", &m, &n);
 printf("Enter the array A \n");
 readarr(a, m, n);
 printarr(a, m, n);
 printf("Enter the array B \n");
 readarr(b, m, n);
 printarr(b, m, n);
 addarr(a, b, c, m, n);
 printf("Array C is\n");
 printarr(c, m, n);
 
}
 
void readarr(int a[100][100],int m, int n)
{ 
   int i, j; 
   for (i = 0; i < m; i++)
    { for (j = 0; j < n; j++) 
      scanf("%d", &a[i][j]);
    }
}

void printarr(int a[100][100],int m, int n)
{ 
   int i, j; 
   for (i = 0; i < m; i++)
    { for (j = 0; j < n; j++) 
      {
      printf("%d \t", a[i][j]);
      }
      printf("\n");
    }
}

int addarr(int a[100][100], int b[100][100], int c[100][100], int m, int n)
{
  int i, j;
   for (i = 0; i < m; i++)
    { for (j = 0; j < n; j++) 
      {
      c[i][j] = a[i][j] + b[i][j];
      }
     
    }
}
