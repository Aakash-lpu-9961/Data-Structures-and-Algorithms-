#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n);

int main()
{
    int arr[] = {12, 31, 11, 21, 29, 16, 36, 35, 55, 43, 67, 76, 44, 32, 21};
    int n = sizeof(arr) / sizeof(int);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "Sorted Array\n"
         << endl;
    SelectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            swap(arr[min], arr[i]);
        }
    }
}