#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of the array:"<<" ";
    cin>>n;

    int *ptr = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>ptr[i];
    }

    cout<<"\n"<<endl;

    for (int i = 0; i < n; i++)
    {
        cout<<ptr[i]<<endl;
    }

    return 0;
    
    
}