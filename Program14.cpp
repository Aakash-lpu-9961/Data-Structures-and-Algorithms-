#include<iostream>
using namespace std;

void swap(int a, int b)
{
	int temp;
	
	temp=a;
	a=b;
	b=temp;
}

int main()
{
	int a=4;
	int b=6;
	
	cout<<"Value of a is:\t"<<a<<endl;
	cout<<"Value of b is:\t"<<b<<endl;
	
	cout<<"\n"<<endl;

	swap(a,b);
	
	cout<<"Value of a is:\t"<<a<<endl;
	cout<<"Value of b is:\t"<<b<<endl;
	
	return 0;
}
