#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter your age:"<<endl;
	cin>>age;
	
	if(age>18 && age<90)
	{
		cout<<"Allowed to vote"<<endl;
	}
	else
	{
		cout<<"Not Allowed to vote"<<endl;
	}
}
