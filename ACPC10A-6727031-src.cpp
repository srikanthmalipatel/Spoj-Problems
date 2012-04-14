#include<stdio.h>
#include<iostream>
#include<algorithm>
#include <cstdio>

using namespace std;


int main(void)
{
	int t;
	for(int a, b, c; scanf("%d %d %d", &a, &b, &c) == 3; )
	{
		if(!(a || b || c)) break;
		if(c - b == b - a) printf("AP %d\n", (c<<1) - b);
		else printf("GP %d\n", (c * c) / b);
	}
	return 0;
}