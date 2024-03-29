// C++ program to check if an
// Array is sorted or not
#include <bits/stdc++.h>
using namespace std;

// Function that returns true if array is
// sorted in non-decreasing order.
bool arraySortedOrNot(int arr[], int n)
{
	// Array has one or no element
	if (n == 0 || n == 1)
		return true;

	for (int i = 1; i < n; i++)

		// Unsorted pair found
		if (arr[i - 1] > arr[i])
			return false;

	// No unsorted pair found
	return true;
}

// Driver code
int main()
{
	int arr[] = { 89,20, 23, 23, 45, 78, 88 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (arraySortedOrNot(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
}

