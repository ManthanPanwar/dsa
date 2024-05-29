//pushes the maximum to the last by adjacent swapping
/*
step1: Within the loop, we will run another loop(say j, runs from 0 to i-1 though the range is from 0 to i) to push the maximum element to the last index of the selected range, by repeatedly swapping adjacent elements.
step2: we will swap adjacent elements(if arr[j] > arr[j+1]) until the maximum element of the range reaches the end.
step3: Thus, after each iteration, the last part of the array will become sorted
*/


// Worst, Average Time-> O(N^2)
// can be optimized
// Best Time-> O(N) if array is sorted, using boolean variable for checking the number of swaps.

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr)
{
	for(int i=0; i<arr.size()-1; i++)
	{
		bool didSwap = false;
		for(int j=0; j<arr.size()-i-1; j++)
		{
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				didSwap = true;
			}
		}
		if(didSwap==false) return;
		cout<<"runs: "<<i+1<<endl;
	}
}

int main()
{
	vector<int> arr= {1,2,3,4,5,6};
	bubbleSort(arr);
	for(int x: arr)
		cout<<x<<endl;
}