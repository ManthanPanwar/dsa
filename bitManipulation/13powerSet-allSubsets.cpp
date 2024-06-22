// subset for n size array are equal to 2^n(or 1<<n)
// Time -> O(2^n * N)       space -> nearly O(2^n * N) where n= size of given array and N = number of subset

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> powerSet(vector<int>& vec)
{
  int subset = 1<<vec.size();
        
        vector<vector<int>> ans;
        for(int i=0; i<subset; i++)
        {
            vector<int> subsetList;
            for(int j=0; j<vec.size(); j++)
            {
             if((i & (1<<j)))
                subsetList.push_back(vec[j]);
            }
            ans.push_back(subsetList);
        }
        return ans;
}

void printPowerSet(vector<vector<int>>& ans)
{
  for(int i=0; i<ans.size(); i++)
  {
    for(int j=0; j<ans[0].size(); j++)
      cout<<ans[i][j];
  }
}

int main()
{
  vector<int> vec = {1,2,3};
  vector<vector<int>> ans = powerSet(vec);
  cout<<ans.size();
  printPowerSet(ans);
}

// ************************************************************************************************

// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& vec) {
//         int subset = 1<<vec.size();
//         cout<<subset;
//         vector<vector<int>> ans;
//         for(int i=0; i<subset; i++)
//         {
//             vector<int> subsetList;
//             for(int j=0; j<vec.size(); j++)
//             {
//              if((i & (1<<j)))
//                 subsetList.push_back(vec[j]);
//             }
//             ans.push_back(subsetList);
//         }
//         return ans;
//     }
// };