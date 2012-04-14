#include<stdio.h>
#define MAX 1000
int a[MAX];
int main()
{
    int i,j,s,key,p,c;
    long int n,sum;
    scanf("%d",&c);
    for(p=1; p<=c ; p++)
    {
    scanf("%ld %d",&n,&s);
    for(j=0;j < s;j++) scanf("%d",&a[j]);
    for(i = 1;i < s;i++)
    {
        key = a[i];
        for(j=0;j<i;j++)
        if(a[j]>key)
        break;
        //we hav j at which its higher
        int k;
        for(k=i;k>j;k--)
        a[k]=a[k-1];
        a[k]=key;
    }
    printf("Scenario #%d:\n",p);
    sum=0;
    for(i = 1,j = s-1;j >= 0;)
    {
        sum+=a[j];
        if(sum >= n)
        {
            printf("%d\n",i);
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    if(sum<n) printf("impossible\n");
    printf("\n");
    }
    return 0;
}
