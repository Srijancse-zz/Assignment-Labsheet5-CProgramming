#include<stdio.h>
main()
{
int reverse(int);
int a;
scanf("%d",&a);
while(a<100&&a>9999)
scanf("%d",&a);
int r=reverse(a);
printf("\n%d",r);

return 0;}

int reverse(int a){
int r=0,t=10;
while(a){
r=(r*t+(a%10));
a/=10;
//t*=10;
}

return r;
}

