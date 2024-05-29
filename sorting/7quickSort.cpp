// Slightly better than mergeSort coz it does not uses extra space.

/*
step1: Pick a pivot and place it in its correct place in the sorted array.
step2: Shift smaller elements(i.e. Smaller than the pivot) on the left of the pivot and larger ones to the right.
step3: repeat.
*/

// Time-> O(n*log(n))
// Space-> O(1) 



#include <bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int low, int high)
{
	int pivot = arr[low];
	int i=low;
	int j=high;

	while(i<j)
	{
		while(arr[i]<=pivot && i<high)
			i++;
		while(arr[j]>pivot && j>low)
			j--;
		if(i<j) swap(arr[i], arr[j]);
	}
	swap(arr[j], arr[low]);
	return j;
}

void quickSort(vector<int>& arr, int low, int high)
{
	if(low<high)
	{
		int pIndex = partition(arr,low,high);
		quickSort(arr,low,pIndex-1);
		quickSort(arr,pIndex+1,high);
	}

}

int main()
{
	vector<int> arr = {5,36,11,574,7,23,886,2};
	quickSort(arr,0,arr.size()-1);
	for(auto x: arr)
		cout<<x<<endl;
}