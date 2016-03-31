//16.03.2016 09.13

#include<stdio.h>
void readarr(int a[], int n);
void printarr(int a[], int n);
int main()
{ 
 int a[100], n, i = 0, temp, maxpos = 0,minpos = 0,max = a[0],min = a[0];
 printf("Enter the length of array\n");
 scanf("%d", &n);
 printf("Enter the array \n");
 readarr(a, n);
 printarr(a, n);
 for (i = 1; i < n; i++)
    { 
      if (a[i] > max)
      { max = a[i];
        maxpos = i;
      }
      if (a[i] < min)
      { min = a[i];
        minpos = i;
      }
    }
  temp = a[maxpos];
  a[maxpos] = a[minpos];
  a[minpos] = temp;
  printarr(a, n);
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
