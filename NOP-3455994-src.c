#include<stdio.h>
#define MAX 202
int main(){char a[MAX];int i,j,flag,nop;scanf("%s",a);flag=0;nop=0;j=1;
for(i=0;a[i]!='\0';i++){if((a[i]>='A')&&(a[i]<='Z')){flag = 1;if(i!=0) if((j%4)!=0)nop+=(4-(j%4));j=1;}
else if((flag==1)&&(a[i]>='a'&&a[i]<='z')){flag=0;j=2;}
else if((flag==0)&&(a[i]>='a'&&a[i]<='z'))j++;}printf("%d\n",nop);return 0;}
