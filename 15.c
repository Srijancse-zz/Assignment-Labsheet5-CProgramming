//18.03.2016 14.20

#include<stdio.h>
#include <stdlib.h>
void readarr(int a[100][100],int m, int n);
void printarr(int a[100][100],int m, int n);
int transarr(int a[100][100],int m, int n);
int main()
{
 int a[100][100],b[100][100],m, n, i = 0, j;
 printf("Enter the rows and columns of array\n");
 scanf("%d %d", &m, &n);
 printf("Enter the array A \n");
 readarr(a, m, n);
 printarr(a, m, n);
 printf("transposed array is\n");
 transarr(a, m, n); 
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
    { for (j = 0; j < n ; j++) 
      {
      printf("%d \t", a[i][j]);
      }
      printf("\n");
    }
}

int transarr(int a[100][100],int m, int n)
{ 
   int i, j; 
   for (i = 0; i < n; i++)
    { for (j = 0; j < m ; j++) 
      {
      printf("%d \t", a[j][i]);
      }
      printf("\n");
    }
}
