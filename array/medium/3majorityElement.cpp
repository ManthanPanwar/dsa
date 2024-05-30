// Brute force: using 2 loops, innerloop will count the occurences for each ith element.
// Time->O(n^2)

// Better Approach: using map data structure or unordered_map data structure for storing occurences
// Time->O(n*log(n)) in map						O(n) in best and average case unordered_map

// Optimal: MOORE'S VOTING ALGORITHM
// keeping the count variable and incrementing count if maj == arr[i] otherwise decrementing and if count == 0 then update maj = arr[i].
// Time-> O(N) + O(N)

#include <bits/stdc++.h>
using namespace std;


// finding the majority element
int majorityElement(vector<int>& arr)
{
	int count = 1;
	int maj = arr[0];
	for(int i = 1; i<arr.size(); i++)
	{
		if(arr[i]==maj)
			count++;
		else
			count--;
		if(count==0)
		{
			maj = arr[i];
			count = 1;
		}
	}
	return maj;
}


// checking whether the element found is the majority element or not
bool majorityCheck(vector<int>& v, int maj)
{
	int count = 0;
	for(int x: v)
	{
		if(x==maj) count++;
		cout<<count<<endl;
	}
	if(count > (v.size()/2)) return true;
	else return false;
}

int main()
{
	vector<int> arr = {1,2,3};
	int maj = majorityElement(arr);
	cout<<maj<<endl;
	cout<<majorityCheck(arr, maj);

}
