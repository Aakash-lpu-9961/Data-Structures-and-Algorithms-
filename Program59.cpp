#include <iostream>
using namespace std;
int maxEnergies(int arr[], int n);
int main()
{
    int n;
    int arr[n];
    int max;
    cout << "Total Chemicals:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\t";
    max = maxEnergies(arr, n);
    cout << "Max Energy is:" << max << endl;
    return 0;
}
int maxEnergies(int arr[], int n)
{
    int temp = arr[0];
    int mul;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            mul = arr[i] * arr[j];
            if (mul > temp)
            {
                temp = mul;
            }
            mul = 0;
        }
    }

    return temp;
}