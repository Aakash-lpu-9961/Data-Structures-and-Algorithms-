#include<iostream>
	//aakash-lpu-9961 - - github ::3sec ago
using namespace std;
int main()
{
	int n;
	cout<<" ";
	cin>>n;
		//aakash-lpu-9961 - - github ::3sec ago
	if(n % 3 == 0 && n % 5 == 0)
	{
		cout<<"3"<<endl;
	}
	else if(n % 5 == 0)
	{
		cout<<"2"<<endl;
	}
	else if(n % 3 == 0)
	{
		cout<<"1"<<endl;
	}
		//aakash-lpu-9961 - - github ::3sec ago
	else
	{
		cout<<"0"<<endl;
	}
		//aakash-lpu-9961 - - github ::3sec ago
	return 0;
}
