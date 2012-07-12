#include<stdio.h>
#include<iostream>
#include<stdlib.h>
#include<algorithm>
#define MAX 10000001
using namespace std;

int N;
int S[101];
int itr,itr2;
int values[MAX];
int R[MAX];

//bsearch returning the count of number appears in array,if number doesn't exist returns 0
int bsearch(int val)
{
    int size=0,temp=0;
    int low=0,high=itr;
    int mid;
    int iterations=100;
    while(low<=high && iterations)
    {
         iterations--;
        mid=(low+high)/2;
        if(values[mid]==val)
        {
            temp=mid-1;
            while(mid<itr && values[mid]==val)
            {
               size++;
               mid++;
            }
            while(temp>=0 && values[temp]==val)
            {
                size++;
                temp--;
            }
            return size;
        }
        else if(values[mid]>val)
        high=mid-1;
        else
        low=mid+1;
    }
    return 0;
}
int main()
{

     int a[4000],b[4000],c[4000],d[40000],value,i,j,k;
     int temp,size2;
     long long int count=0;
     //FILE *fp=fopen("in.txt","r");
     scanf("%d",&N);
     for(i=0;i<N;i++)
     {
         scanf("%d%d%d%d",&a[i],&b[i],&c[i],&d[i]);
     }
      itr=0;
      //store all values of a*b+c in values array
     for(i=0;i<N;i++)
     {
         for(j=0;j<N;j++)
         {

                 values[itr++]=a[i]+b[j];//(a+b)
         }
     }
     //sort the values array
     sort(values,values+itr);
      itr2=0;
     for(i=0;i<N;i++)
     {
         for(j=0;j<N;j++)
         {
                R[itr2++]=(c[i]+d[j])*(-1);//-(d+c)
         }
     }
        sort(R,R+itr2);
        int size1;
        for(i=0;i<itr2;)
        {
             size1=0;
	         temp=R[i];
             while(R[i]==temp && i<itr2)
		     {
                   size1++;
                   i++;
		     }
            size2=bsearch(temp);
            count+=size1*size2;
	}
     printf("%lld\n",count);
     return 0;
}
