// Bubble Sort Algorithm in C++
#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
    for (int i = 0; i < (n-1); i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j], arr[j+1]);
            }
            
        }
        
    }
    
}
int main()
{
    int arr[] = {12, 54, 65, 11, 32, 31, 26};
    int n = sizeof(arr)/sizeof(int);
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
    
}