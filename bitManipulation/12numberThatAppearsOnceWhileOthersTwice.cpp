#include <bits/stdc++.h>
using namespace std;

// we can do it by using XOR operator
int singleNumber(vector<int>& arr)
{
  int xor1 = 0;
  for(int i=0;i<arr.size();i++)
  {
    xor1 = xor1^arr[i];
  }
  return xor1;
}

int main()
{
  vector<int> v = {1,2,5,5,7,8,8,2,1,7,4};
  int ans = singleNumber(v);
  cout<<ans<<endl;
  return 0;
}