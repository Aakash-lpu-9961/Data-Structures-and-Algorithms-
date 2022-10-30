#include<iostream>
using namespace std;
void moveZeroToEnd(int arr[], int n)
{
	int count = 0;
	for(int i= 0; i<n; i++)
	{
		if(arr[i] != 0)
		{
			swap(arr[i], arr[count]);
			count++;
		}
	}
}
int main()
{
	int n;
	int arr[] = {8, 5, 0, 10, 0, 20};
	n = sizeof(arr)/sizeof(int);
	moveZeroToEnd(arr, n);
	for(int i=0; i<n; i++)
	{
		cout<<"\n"<<arr[i]<<endl;
	}
	
	return 0;
}
