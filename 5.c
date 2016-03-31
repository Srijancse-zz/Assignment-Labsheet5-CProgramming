//16.03.2016 09.35

#include<stdio.h>
void readarr(int a[], int n);
void printarr(int a[], int n);
int main()
{
 int a[100], n, i = 0, max1 = a[0], max2 = a[0];
 printf("Enter the length of array\n");
 scanf("%d", &n);
 printf("Enter the array \n");
 readarr(a, n);
 printarr(a, n);
 for (i = 1; i < n; i++)
 { 
   if (a [i] > max1)
    { max1 = a[i];
    }
 } 
 for (i = 1; i < n, i++)
 { 
   if (a [i] > max2 && a[i] < max1)
    { max2 = a[i];
    }
 } 
 printf("%d", &max2);
}

void readarr(int a[100], int n)
{
   int i = 0; 
   for (i = 0; i < n; i++)
 { 
   scanf("%d", &a[i]);
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
