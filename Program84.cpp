#include<iostream>
using namespace std;
int main()
{
	string fruits[5];
	for(int i=0; i<=2; i++)
	{
		cin>>fruits[i];
	}
	cout<<"Fruits are:"<<endl;
	for(int i=0; i<=2; i++)
	{
		cout<<"Fruits-"<<(i+1)<<" is: "<<fruits[i]<<endl;
	}
	return 0;
}
