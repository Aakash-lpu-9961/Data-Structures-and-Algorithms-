#include<iostream>
using namespace std;
void BubbleSort(int arr[], int n)
{
   for (int i = 0; i < (n-1); i++)
   {
    for (int j = 0; j < (n-i-1); j++)
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
    //Bubble Sort Algo in C++
    int arr[] = {12, 45, 34, 67, 87, 44, 42, 99, 54};
    int n = sizeof(arr)/sizeof(int);
    BubbleSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    return 0;
}