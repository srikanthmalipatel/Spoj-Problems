#include<stdio.h>
#define MAX 1002
int a[MAX];
int main()
{
    int i,j,sum,tot,n,k,s,key;
    scanf("%d %d %d",&n,&k,&s);
    for(j=0;j < n;)
    {
        scanf("%d",&a[j]);
        j++;
    }
    tot = k*s;
    for(i = 1;i < n;i++)
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
    sum=0;
    for(i = 1,j = n-1;j >= 0;)
    {
        sum+=a[j];
        if(sum >= tot)
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
    return 0;
}
