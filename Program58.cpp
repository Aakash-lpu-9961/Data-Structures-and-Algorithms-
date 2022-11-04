#include<iostream>
using namespace std;

void QuickSort(int arr[], int n)
{
    
}
int main(){
     //Quick Sort Algorithm in C++
     int arr[]={12,43,11,21,43,23,56,78,98,13,45,32,34,72,75};
     int n=sizeof(arr)/sizeof(int);
     cout<<"Unsorted Array"<<endl;
     for(int i=0;i<n;i++)
     {
        cout<<arr[i]<<"\t";
     }
     cout<<"\n"<<endl;
     QuickSort(arr,n);
     cout<<"Sorted Array"<<endl;
     for (int j = 0; j < n; j++)
     {
        cout<<arr[j]<<"\t";
     }
     cout<<"\n"<<endl;
     return 0;
}