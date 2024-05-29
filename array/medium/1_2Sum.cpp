//Variety-1: optimal is the best solution
//Variety-2: Better is the most optimal


// Brute force: take one element and check with the elements which are after it; Time->O(N^2).

// Better: use map dataStructure for storing element and its index.

// Optimal: sort the array and then use 2 pointers(greedy) but you have to store the indices in a pair dataStructure.
 

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target)
{
	unordered_map<int, int> mapp;
	for(int i=0;i<arr.size(); i++)
	{
		int more = target - arr[i];
		if(mapp.find(more) != mapp.end())
			return {mapp[more], i};
		mapp[arr[i]] = i;
	}
	return {-1,-1};
}

int main()
{
	vector<int> vec = {2,3,4};
	int target = 6;
	vector<int> ans = twoSum(vec, target);
	for(auto x: ans)
		cout<<x<<endl;

}

