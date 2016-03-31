//18.03.2016 14.05

#include<stdio.h>
#include <stdlib.h>
void readarray(int a[100][100],int m, int n);
void display_array(int a[100][100],int m, int n);
int main()
{
 int a[100][100],m, n, i = 0, j;
 printf("Enter the rows and columns of array\n");
 scanf("%d %d", &m, &n);
 printf("Enter the array \n");
 readarr(a, m, n);
 printarr(a, m, n);
 
}
 
void readarray(int a[100][100],int m, int n)
{ 
   int i, j; 
   for (i = 0; i < m; i++)
    { for (j = 0; j < n; j++) 
      scanf("%d", &a[i][j]);
    }
}

void display_array(int a[100][100],int m, int n)
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


