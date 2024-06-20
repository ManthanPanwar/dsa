// Brute force: taking two extra array and storing positives in one and negatives into other and then combine them into one.
// Time: O(n)     space: O(n) + O(n)

// Optimal: taking one extra array and storing positives at even position and negatives at odd position.
// Time: O(n)     space: O(n)


#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
  vector<int> ans(nums.size());
  int pos = 0;
  int neg = 1;

  for(int i=0; i<nums.size(); i++)
  {
    if(nums[i]>0)
    {
      ans[pos] = nums[i];
      pos += 2;
    }
    else
    {
      ans[neg] = nums[i];
      neg += 2;
    }
  }
  return ans;
}