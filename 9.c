//18.03.2016 13.20

#include<stdio.h>
#include <stdlib.h>
void readarr(int a[], int n);
void printarr(int a[], int n);
int linearsearch(int a[], int n, int key);
int main()
{
 int a[100], n = 10, i = 0, j, key, pos;
 printf("Enter the length of array\n");
 scanf("%d", &n);
 printf("Enter the array \n");
 readarr(a, n);
 printarr(a, n);
 printf("Enter key\n");
 scanf("%d", &key);
 pos = linearsearch(a, n, key);
  if (pos == -1)
  { printf("Key Not Found");
  }
  else
  { printf("Key found at %d\n", pos);
  }
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

int linearsearch(int a[100], int n, int key)
{
 int i = 0;
 for (i = 0; i < n; i++)
 { 
   if (a[i] == key)
    {
     return i;
    }
 }
 return -1;
}
