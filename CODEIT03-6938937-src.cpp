#include<stdio.h>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include<iostream>
//#include<stdlib.h>
using namespace std;
#define MAX 30
#define s(n) scanf("%d",&n);
char days[][30]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
int solve(int d,int m,int y){
      static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
       y -= m < 3;
       return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
int main(){
    int t;
    int day,month,year;
    scanf("%d",&t);
    while(t--){
        s(day);s(month);s(year);
        printf("%s\n",days[solve(day,month,year)]);
    }
    return 0;
}
