//18.03.2016 13.41

#include<stdio.h>
#include <stdlib.h>
void readarr(int a[], int n);
void printarr(int a[], int n);
void bubblesort(int a[], int  n);
int main()
{
 int a[100], n , i = 0, j, tmp;
 printf("Enter the length of array\n");
 scanf("%d", &n);
 printf("Enter the array \n");
 readarr(a, n);
 printarr(a, n);
 bubblesort(a,n);

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

void bubblesort(int a[100], int n)
{
 int i, j, tmp;
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
 printf("Bubblesorted array is \n");
 printarr(a, n); 
}

