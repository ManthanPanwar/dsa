



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
