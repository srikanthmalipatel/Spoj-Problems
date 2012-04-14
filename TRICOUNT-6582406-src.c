#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 

int main()
{
  int i,j,k;
  long long  int T,N;
  long long int result;
  
  scanf("%lld",&T);
  while(T--)
  {
     scanf("%lld",&N);
     result=(N*(N+2)*(2*N+1))/8;
     printf("%lld\n",result);
  }

return 0;
}

