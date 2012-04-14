#include<stdio.h>
#define MAX 1000

int main()
{
    int a1[MAX],a2[MAX];
    int N,t,i,k,j,p,key,sum;
    scanf("%d",&t);
    for(p=1 ; p<=t ; p++)
    {
        scanf("%d",&N);
        for(i=0 ; i<N ; i++) scanf("%d",&a1[i]);
        for(i=0 ; i<N ; i++) scanf("%d",&a2[i]);
        for(i = 1;i < N;i++)
        {
            key = a1[i];
            for(j=0;j<i;j++)
              if(a1[j]>key)
                 break;
            for(k=i;k>j;k--) a1[k]=a1[k-1];
            a1[k]=key;
        }
        for(i = 1;i < N;i++)
        {
            key = a2[i];
            for(j=0;j<i;j++)
              if(a2[j]>key)
                 break;
            for(k=i;k>j;k--) a2[k]=a2[k-1];
            a2[k]=key;
        }
        sum = 0;
        for(i=0 ; i<N ; i++) sum+=a1[i]*a2[i];
        printf("%d\n",sum);
    }
    return 0;
}
