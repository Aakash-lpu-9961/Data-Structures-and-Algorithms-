#include<iostream>
using namespace std;
bool sort(int arr[], int n)
{
	if(n==0 || n==1)
		return true;
	for(int i=1; i<n; i++)
		// Unsorted Pair Found
		if(arr[i-1]>arr[i])
			return false;

	//No Unsorted Pair FOund
	return true;
}
int main()
{
	int a[] = {19, 13, 14, 15, 16, 17};
	int n = sizeof(a)/sizeof(int);
	if(sort(a, n))
		cout<<"Yes\n"<<endl;

	else
		cout<<"No\n"<<endl;
		
}
