#include <bits/stdc++.h>
using namespace std;

// we can do it by using & operator on N and N-1.
int removeLastSetBit(int& num)
{
  return (num & (num-1));
}

int main()
{
  int num = 11; // 1011
  cout<<bitset<8>(num).to_string()<<endl;
  num = removeLastSetBit(num);
  cout<<bitset<8>(num).to_string()<<endl;
}