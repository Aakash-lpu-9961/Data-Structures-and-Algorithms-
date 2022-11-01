#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_ind = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }

        if (min_ind != i)
        {
            swap(arr[min_ind], arr[i]);
        }
    }
}
int main()
{
    // Selection Sort Algorithm in C++
    int arr[] = {12, 13, 32, 111, 32, 78, 11, 10, 4, 90, 67, 54};
    int n = sizeof(arr) / sizeof(int);
    SelectionSort(arr, n);
    cout<<"\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}