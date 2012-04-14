#include<stdio.h>
#include <iostream>

using namespace std;

#define max 100001

int n;
long long res = 0;

int temp[max];
int arr[max];
void merge(int left, int m, int right)
{
    int k = 0;
    int i = left, j = m + 1;
    while (i <= m && j <= right)
        if (arr[i] < arr[j])
        {
            temp[k++] = arr[i];
            res += (long long)(right - j + 1) * arr[i++];
        }
        else
            temp[k++] = arr[j++];

    while (j <= right)
        temp[k++] = arr[j++];
    while (i <= m)
        temp[k++] = arr[i++];

    for (int i = 0; i < k; ++i)
        arr[left + i] = temp[i];
}

void sort(int left, int right)
{
    if (left < right)
    {
        int m = left + (right - left) / 2;
        sort(left, m);
        sort(m + 1, right);
        merge(left, m, right);
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    for(int w=0;w<t;w++)
    {
        scanf("%d", &n);
        for(int i=0;i<n;i++)
            scanf("%d", &arr[i]);

        res=0;
        sort(0, n - 1);

        printf("%lld\n",res);
    }

    return 0;
}
