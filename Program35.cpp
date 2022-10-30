#include<iostream>
using namespace std;

int main(){
    int arr[10] = {25,12,33,14,55,81,97,28,9,24};

    for(int i = 0; i< 10; i++)
    {
        cout<<arr[i]<<endl;
    }

    cout<<"\n\n\n"<<endl;

    if(arr[0]> arr[1])
    {
        arr[0] = arr[1];
    }
    else{
        arr[1] = arr[0];
    }

     for(int i = 0; i< 10; i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}