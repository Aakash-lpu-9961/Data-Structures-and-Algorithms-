#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter your age:"<<endl;
	cin>>age;
	
	if(age>5 && age<18)
	{
		cout<<"To Young for entering in PUB";
	}
	
	else if(age>18 && age <35)
	{
		cout<<"Get Your Pass";
	}
	
	else if(age>35 && age<55)
	{
		cout<<"Heroes of the PUB";
	}
	
	return 0;
}
