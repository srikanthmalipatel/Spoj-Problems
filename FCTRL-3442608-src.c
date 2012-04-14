#include<stdio.h>
long long int k,n,sum;
int main()
{
    int t,i,j;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld",&n);
        sum = n/5;
        k = 0;
        k+=sum;
        while(sum!=0)
        {
            sum = sum/5;
            k+=sum;
        }
        printf("%lld\n",k);
    }
    return 0;
}
