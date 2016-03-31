//17.03.2016 12.50

#include<stdio.h>
#include <stdlib.h>
void readarr(int a[], int n);
void printarr(int a[], int n);
int main()
{
 int a[100], n = 10, i = 0, max;
 readarr(a, n);
 printarr(a, n);
 for (i = 1; i < n; i++)
 { 
   if (a [i] > max)
    { max = a[i];
    }
 } 
 printf("The max number is %d \n", max);
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

