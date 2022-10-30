#include<iostream>
using namespace std;
// Sorted Array
int BinarySearch(int arr[], int n, int key)
{
	int low, high, mid;
	low = 0;
	high = (n-1);
	
	while(low<=high)
	{
		mid = (low + high)/2;
		if(arr[mid]==key)
		{
			return mid;
		}
		else if(key>arr[mid])
		{
			low = mid +1;
		}
		else
		{
			high = mid -1;
		}
	}
	return -1;
}

//Driver Code
int main()
{
	//Binary Search in C++
	int key;
	int index;
	cout<<"Enter Element to be searched in the array:";
	cin>>key;
	int arr[] = {15, 21, 23, 29, 31, 34, 37, 40, 52, 54};
	int n = sizeof(arr)/sizeof(int);
	index = BinarySearch(arr, n, key);
	cout<<"Index of"<<" "<<key<<" "<<"is: "<<index;
	return 0;
}
