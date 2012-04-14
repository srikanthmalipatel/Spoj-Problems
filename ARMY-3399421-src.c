#include<stdio.h>
#define MAX 100000

int main()
{
    int a1[MAX],a2[MAX];
    int i,j,num,ng,nm,key,p,h1,h2;
    scanf("%d",&num);
    for(p=1 ; p<=num ; p++)
    {
         scanf("%d %d",&ng,&nm);
         for(i=0 ; i<ng ; i++) scanf("%d",&a1[i]);
         for(i=0 ; i<nm ; i++) scanf("%d",&a2[i]);
         h1=a1[0];
         for(i=1 ; i<ng ; i++)
         {
             if(a1[i]>h1) h1=a1[i];
         }
         h2=a2[0];
         for(i=1 ; i<nm ; i++)
         {
             if(a2[i]>h2) h2=a2[i];
         }
         if(h1>=h2) printf("Godzilla\n");
         else if(h1<h2) printf("MechaGodzilla\n");
         else printf("uncertian\n");
    }
    return 0;
}
