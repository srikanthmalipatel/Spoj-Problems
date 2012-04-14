#include<stdio.h>
#define MAX 100000
long long int n,m,z,w,q;
int a[MAX]={0};
int b[MAX]={0};

int main()
{
    int d,i;
    scanf("%d",&d);
    for(i=1 ; i<=d ; i++)
    {
        scanf("%lld%lld",&n,&m);
        z = n-m;
        w = (m-1)/2;
        q = z&w;
        if(q==0) printf("1\n");
        else printf("0\n");
    }
    return 0;
}
