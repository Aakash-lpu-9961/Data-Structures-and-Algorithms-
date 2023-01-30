#include<iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int min=i;
		for(int j=i+1; j<n; j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			swap(arr[min], arr[i]);
		}
	}
}
int main()
{
	int n;
	cout<<"Total Size of Array:";
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
	    cout<<"Enter Element-"<<(i+1)<<" : ";
	    cin>>arr[i];
	}
	selectionsort(arr, n);
	for(int i=0; i<n; i++)
	{
	    cout<<arr[i]<<endl;
	}
	return 0;
}

