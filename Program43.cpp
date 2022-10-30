#include<iostream>
using namespace std;

int maxEle(int arr[], int n)
{
	int maxValue = 0;
	int index;
	for(int i = 0; i<n; i++)
	{
		if(arr[i]>maxValue)
		maxValue = arr[i];
		index = i;
	}
	return maxValue;
}

int main()
{
	int a[] = {90, 30, 82, 32, 178, 100};
	int n = sizeof(a)/sizeof(int);

	int val = maxEle(a, n);
	cout<<"Largest element in array is:"<<val;
	return 0;
}
