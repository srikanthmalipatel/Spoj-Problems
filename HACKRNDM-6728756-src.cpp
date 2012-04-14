#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
int N, k, n;
cin >> N >> k;
vector<int> nums;
for (int i=0;i<N;++i)
{
cin >> n;
nums.push_back(n);
}
sort( nums.begin(), nums.end() );
int c = 0;
for (int i=0;i<N-1;++i)
{
for (int j=i+1;j<N;++j)
{
int X = nums[j]-nums[i];
if (X < k)
continue;
else if (X == k)
++c;
else
break;
}
}
cout << c << endl;
}