#include <bits/stdc++.h>
using namespace std;

int setUsingLeftShift(int& num, int i)
{
  int temp = 1<<i;
  num = num | temp;
  return num;
}

int main()
{
  int num = 9; // 1001
  cout<<bitset<8>(num).to_string()<<endl;
  num = setUsingLeftShift(num, 2);
  cout<<bitset<8>(num).to_string()<<endl;
}