#include<stdio.h>
#include<string.h>
#include<iostream>
#include<algorithm>
using namespace std;
#define MAX 200006
int arr[MAX];
int temp[MAX];
unsigned long long merge(int arr[],int temp[],int left,int mid,int right)
{
    int i=left;
    int j=mid;
    int k=left;
    unsigned long long int invcount=0;
    while((i<=mid-1) && (j<=right))
    {
        if(arr[i]<=arr[j])
        temp[k++]=arr[i++];
        else
        {
            temp[k++]=arr[j++];
            invcount+=(mid-i);
        }
    }
    while(i<=mid-1)
    temp[k++]=arr[i++];
    while(j<=right)
    temp[k++]=arr[j++];
    for(int i=left;i<=right;i++)
    arr[i]=temp[i];
    return invcount;
}
unsigned long long int mergesort(int arr[],int temp[],int left,int right)
{
    unsigned long long int invcount=0;
    if(right>left){
        int mid=(left+right)/2;
        invcount=mergesort(arr,temp,left,mid);
        invcount+=mergesort(arr,temp,mid+1,right);
        invcount+=merge(arr,temp,left,mid+1,right);
    }
    return invcount;
}
int main()
{
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        printf("%llu\n",mergesort(arr,temp,0,n-1));
    }
    return 0;
}
