//18.03.2016 13.12

#include<stdio.h>
#include <stdlib.h>
void readarr(int a[], int n);
void printarr(int a[], int n);
int main()
{
 int a[100], n = 10, i = 0, j, tmp;
 readarr(a, n);
 printarr(a, n);
 for (i = 0; i < n; i++)
 { 
  for (j = 0; j < (n - i - 1); j++)
   { if (a[j] > a[j + 1])
     { tmp = a[j];
       a[j] = a[j + 1];
       a[j + 1] = tmp;
     }
   }
 
 }
 printarr(a, n); 
}
void readarr(int a[100], int n)
{
   int i = 0; 
   for (i = 0; i < n; i++)
 { 
   a[i] = rand();
 }
}

void printarr(int a[100], int n)
{
   int i = 0; 
   for (i = 0; i < n; i++)
 { 
   printf("%d \t ", a[i]);
 }
}

