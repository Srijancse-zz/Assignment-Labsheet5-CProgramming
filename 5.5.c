#include<stdio.h>
long long f[1000000];


main(){

 int i=0;

 long long expr(long long);
  for(i;i<1000000;i++)
   f[i]=0;
 f[0]=1;

 long long a,b;

 scanf("%lld%lld",&a,&b);
 for(a;a<=b;a++)
 {
 if(a==expr(a))
 printf("\n%lld ",a);

 }
return 0; 
}

 long long expr(long long a){
  long long q=0;
  long long fact(long long);
  while(a){
   q+=fact(a%10);
   a/=10;
   }
  return q;
  }

 long long fact(long long a){
  if(f[a])
  return f[a];
  f [a]=a*fact(a-1);
  return f[a];
  }

