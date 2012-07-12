#include<stdio.h>
#include<math.h>
#include<string.h>

int main() {
	int T;
	scanf("%d",&T);
	while(T--)
	{
		char str[1000000];
		int yr;
		scanf("%d%s",&yr,str);
		int sum = 0,i;
		for(i = 0 ; i < strlen(str) ; i++)
		{
			int tmp = 2001 + (int)(str[i]-'A');
			if(tmp+4 < yr) sum += pow(yr-tmp-4,2);
			else sum += pow(yr-tmp,2);
		}
		printf("%d\n",sum);
	}
	return 0;
}
