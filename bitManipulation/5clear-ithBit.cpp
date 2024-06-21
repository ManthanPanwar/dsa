#include <bits/stdc++.h>
using namespace std;

int clearUsingLeftShift(int& num, int i)
{
  int temp = 1<<i;
  temp = ~temp;
  num = num&temp;
  return num;
}

int main()
{
  int num = 9; // 1001
  cout<<bitset<8>(num).to_string()<<endl;
  num = clearUsingLeftShift(num, 3);
  cout<<bitset<8>(num).to_string()<<endl;
}