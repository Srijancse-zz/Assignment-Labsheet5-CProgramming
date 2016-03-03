#include<stdio.h>
int main()
{
int i=-9;
for(i;i<=9;i+=3)
{
 if(i>0)
printf("t=%d y=%d\n",i,3*i*i+5);
else 
printf("t=%d y=%d\n",i,-3*i*i+5);
}
return 0;
}

