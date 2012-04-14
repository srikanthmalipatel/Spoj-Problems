#include<stdio.h>
#define MAX 500000
#define MAX1 4000000
long int a[MAX],k,i,size;
int b[MAX1]={0};

int main()
{
    int key;
    scanf("%ld",&k);
    a[0] = 0;
    b[0] = 1;
    size = 1;
    while(k!=-1)
    {
        if(k<size)printf("%ld\n",a[k]);
        else
        {
            for(i=size ; i<=k ; i++)
            {
                 key = a[i-1]-i;
                 if(key>0 && (b[key]==0))
                 {
                     a[i] = key;
                     b[key] = 1;
                 }
                 else
                 {
                     key = a[i-1]+i;
                     a[i] = key;
                     b[key] = 1;
                 }
                 size++;
           }
           printf("%ld\n",a[i-1]);

        }
        scanf("%ld",&k);
    }
    return 0;
}



