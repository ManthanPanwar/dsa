// Brute force: sort the array
// Time->O(n*log(n))

// Better: use 3 variables to store count of each element and then put the elements back in the array according to the count value.
// Time-> O(N) + O(N)

// Optimal: DUTCH NATIONAL FLAG ALGORITHM
/*
This algorithm contains 3 pointers i.e. low, mid, and high, and 3 main rules.  The rules are the following:
{
	arr[0….low-1] contains 0. [Extreme left part]
	arr[low….mid-1] contains 1.
	arr[high+1….n-1] contains 2. [Extreme right part], n = size of the array
	The middle part i.e. arr[mid….high] is the unsorted segment.
}
*/
// We are assuming that entire array is unsorted that is why we are keeping low and mid on the same position.

#include <bits/stdc++.h>
using namespace std;

void sortColor(vector<int>& arr)
{
	int low = 0;
	int mid = 0;
	int high = arr.size()-1;

	while(mid<=high)
	{
		if(arr[mid] == 0)
			swap(arr[low++], arr[mid++]);
		else if(arr[mid] == 1)
			mid++;
		else
			swap(arr[mid], arr[high--]);
	}
}


int main()
{
	vector<int> arr = {2,0,2,1,1,0};
	sortColor(arr);
	for(int x: arr)
		cout<<x<<" ";

}
