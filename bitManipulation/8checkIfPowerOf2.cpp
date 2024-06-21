#include <bits/stdc++.h>
using namespace std;

// we can do it by using concept of remove last set bit
string isPowerOf2(int& num)
{
  if((num & (num-1))==0) return "true";
  else return "false";
}

int main()
{
  int num = 9; // 1001
  cout<<bitset<8>(num).to_string()<<endl;
  cout<<isPowerOf2(num);
  return 0;
}