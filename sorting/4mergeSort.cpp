// Divide and Merge
// if odd then take 1 extra in first part(recommended)
// divide till you get 1 element array and then merge.

/*
merge(): This function is used to merge the 2 halves of the array. It assumes that both parts of the array are sorted and merges both of them.
mergeSort(): This function divides the array into 2 parts. low to mid and mid+1 to high where,
*/


// Best, Worst, Average Time-> O(n*log(n))
// Space-> O(N)

#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr, int low, int mid, int high);

void mergeSort(vector<int>& arr, int low, int high){

	if(low >= high) return;
	int mid = (low+high)/2;
	mergeSort(arr, low, mid);
	mergeSort(arr, mid+1, high);
	merge(arr, low, mid, high);
}

void merge(vector<int>& arr, int low, int mid, int high)
{
	vector<int> temp;
	int left = low;
	int right = mid+1;

	while(left <= mid && right <= high)
	{
		if(arr[left] <= arr[right])
			temp.push_back(arr[left++]);
		else
			temp.push_back(arr[right++]);
	}
	while(left<=mid) temp.push_back(arr[left++]);
	while(right<=high) temp.push_back(arr[right++]);

	for(int i=low; i<=high; i++)
		arr[i] = temp[i-low];
}

int main()
{
	vector<int> arr= {1,4,67,23,7,79,57,5,0};
	mergeSort(arr,0,arr.size()-1);
	for(int x: arr)
		cout<<x<<endl;
}

