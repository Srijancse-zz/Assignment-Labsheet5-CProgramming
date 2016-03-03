#include<stdio.h>
main(){
int n;
scanf("%d",&n);
int prev=1;
printf("%d",prev);
int i;
for( i=1;i<n;i++)
{
prev+=mul(prev);
printf(" %d",prev);

}
return 0;
}
int mul(int a){
int m=1;
while(a){
if(a%10)
m*=(a%10);
a/=10;
}
return m;
}

