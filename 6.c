//17.03.2016 12.50

#include<stdio.h>
void readarr(int a[], int n);
void printarr(int a[], int n);
int main()
{
 int a[100], n, i = 0, j, first = a[0];
 printf("Enter the length of array\n");
 scanf("%d", &n);
 printf("Enter the array \n");
 readarr(a, n);
 printarr(a, n);
 for (j = 1; j < n; j++)
 {
  for (i = 1; i < n; i++)
  { 
   if (a[i] == first)
    {
      printf ("The position is %d", i);
    }
   
  }
  first = a[j];
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

