#include<iostream>
#include<math.h>
using namespace std;

int JumpSearch(int arr[], int n, int key)
{
	int start = 0;
	int end = sqrt(n);
	
	while(end<n && arr[end]<= key)
	{
		start = end;
		end = end + sqrt(n);
		
		if(end>(n-1))
		{
			end = n;
		}
	}
	
	for(int i=start; i<end; i++)
	{
		if(arr[i]==key)
		return i;
	}
	
	return -1;
}

int main()
{
	// Jump Search in Sorted Array: C++
	int key, index;
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int n = sizeof(arr)/sizeof(int);
	cout<<"Enter element to be searched in array:";
	cin>>key;
	index = JumpSearch(arr, n, key);
	cout<<"Index of"<<" "<<key<<" "<<"is: "<<index<<endl;
	cout<<"Position of"<<" "<<key<<" "<<"is: "<<(index+1)<<endl;
	
	return 0;
	
}
