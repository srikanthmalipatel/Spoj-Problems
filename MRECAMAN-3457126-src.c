#include<stdio.h>
long long int  i,t,a[500001],p,q,size;
int b[4000000]={0};

int main()
{
          a[0]=0;
          b[0]=1;
          size = 1;
          while(1)
        {
           scanf("%lld",&t);
           if(t==-1)
           break;
           else if(t<size) printf("%lld\n",a[t]);
           else
           {
            for(i=size;i<=t;i++)
            {
                p=a[i-1]-i;
                q=a[i-1]+i;
                if(p>0 && b[p]==0)
                {
                a[i]=p;
                b[p]=1;
                }
                else
                {
                    a[i]=q;
                    b[q]=1;
                }
                size++;
                //printf("%lld\n",a[i]);
            }
            printf("%lld\n",a[i-1]);
           }
        }
        return 0;
}
