//16.03.2016 09.06

#include<stdio.h>
void readarr(int a[], int n);
int main()
{ 
 int a[100], n, i = 0, sum = 0, mean;
 printf("Enter the length of array");
 scanf("%d", &n);
 printf("Enter the array \n");
 readarr(a, n);
 for (i = 0; i < n; i++)
 { 
   sum = sum + a[i];
 } 
  mean = sum / n; 
 printf("The mean is %d \n", mean);
}

void readarr(int a[], int n)
{
   int i = 0; 
   for (i = 0; i < n; i++)
 { 
   scanf("%d", &a[i]);
 }
}
