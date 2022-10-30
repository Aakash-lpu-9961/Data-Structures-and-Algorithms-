#include<iostream>
using namespace std;

int main()
{
	int ele;
	
	int marks[4]={85,78,77,96};
	
	cout<<marks[0]<<endl;
	cout<<marks[1]<<endl;
	cout<<marks[2]<<endl;
	cout<<marks[3]<<endl;
	
	cout<<endl;
	
	marks[0]=99;
	marks[1]=55;
	marks[2]=88;
	marks[3]=44;
	
	
	for(int i=0;i<4;i++)
	{
		cout<<marks[i]<<endl;
	}
	
	
	
	cout<<"Enter total elements for array:"<<endl;
	cin>>ele;
	
	int arr[ele];
	
	for(int j=0;j<ele;j++)
	{
		cout<<"Enter elment-"<<(j+1)<<" "<<"for array:";
		cin>>arr[j];
	}
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Entered elements in the array are"<<endl;
	
	for(int j=0;j<ele;j++)
	{
		cout<<"Element-"<<(j+1)<<" :"<<arr[j]<<endl;
	}
	
	
	//<<marks[0]<<endl;
	//cout<<marks[1]<<endl;
	//cout<<marks[2]<<endl;
	//cout<<marks[3]<<endl;
	
	
}
