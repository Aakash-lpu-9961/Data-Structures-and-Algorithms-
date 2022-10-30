#include<iostream>
using namespace std;
int SecLarEle(int arr[], int n);
int main()
{
	int a[] = {10, 5, 8 ,20};
	int n = sizeof(a)/sizeof(int);
	int value = SecLarEle(a, n);
	cout<<"Second Largest Element in Array is:"<<value<<endl;
	return 0;
}
int SecLarEle(int arr[], int n)
{
	int maxValue = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>maxValue)
		{
			maxValue = arr[i];
		}
	}
	return maxValue;
}
