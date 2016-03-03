#include<stdio.h>
int main(){

  long long n;
  scanf("%lld",&n);
  int i=0;
  long long first=0,second=1;

  while(first<=n){
   //printf("firsr=%lld second=%lld ",first,second);
   long long d=first+1;
   for(d;d<second&&d<=n;d++)

    printf("%lld ",d);
   long long temp=second;
   second+=first;
   first=temp;   
  }

return 0;
}

