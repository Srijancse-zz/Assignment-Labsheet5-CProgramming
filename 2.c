//16.03.2016 08.50 

#include<stdio.h>
void readarr(int a[]);
#define N 10
int main()
{ 
 int a[N], i = 0, n = 10, max = a[0];
 printf("Enter the array \n");
 readarr(a);
 for (i = 1; i < N; i++)
 { 
   if (a [i] > max)
    { max = a[i];
    }
 } 
 printf("The max number is %d \n", max);
}

void readarr(int a[])
{
   int i = 0,  
   for (i = 0; i < N; i++)
 { 
   scanf("%d", &a[i]);
 }
}
