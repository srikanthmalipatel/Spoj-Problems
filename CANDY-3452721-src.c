#include<stdio.h>
#define MAX 10000
int n,d,i,q,avg;
long int sum;
int a[MAX];

int main()
{
    scanf("%d",&n);
    while(n!=-1)
    {
        sum = 0;
        for(i=0 ; i<n ; i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        if(sum%n!=0) printf("-1\n");
        else
        {
            avg = (int)(sum/(long int)n);
            for(i=0,q=0 ; i<n ; i++)
            {
                if(a[i]>avg) q+=(a[i]-avg);
            }
            printf("%d\n",q);
        }
        scanf("%d",&n);
    }
    return 0;
}
