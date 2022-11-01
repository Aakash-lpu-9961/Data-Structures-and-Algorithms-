#include <iostream>
using namespace std;
void SelectionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int min_ind = i;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
            swap(arr[i], arr[min_ind]);
        }
        
    }
}
int main()
{
    int arr[] = {23, 56, 65, 32, 21, 90, 43, 66};
    int n = sizeof(arr) / sizeof(int);

    SelectionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}