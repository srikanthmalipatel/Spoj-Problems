#include<stdio.h>

int main()
{
    int t,i,j;
    long long int n,m;
    scanf("%d",&t);
    for(i=1 ; i<=t ; i++)
    {
        scanf("%lld%lld",&n,&m);
        if(n <= m)
        {
            if(n%2==0)printf("L\n");
            else if(n%2==1) printf("R\n");
        }
        else if(n > m)
        {
            if(m%2==0)printf("U\n");
            else if(m%2==1) printf("D\n");
        }
    }
    return 0;
}
