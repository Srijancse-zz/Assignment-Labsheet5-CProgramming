#include<stdio.h>

main(){

 long long first=1,second=2,third=3;
 int i;
 long long n;
 scanf("%lld",&n);
 printf("%lld %lld %lld ",first,second,third);

 for(i=4;i<n;i++)
  {
  long long fourth=second+2*first;
  printf("%lld ",fourth);
  first=second;
  second=third;
  third=fourth;
}
return 0;}

