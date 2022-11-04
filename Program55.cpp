#include <iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[] = {12, 14, 54, 21, 32, 12, 25, 89};
    int n = sizeof(arr) / sizeof(int);
    // Bubble Sort Algorithm Implementation
    BubbleSort(arr, n);
    cout<<"\n";
    cout << "Sorted Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}