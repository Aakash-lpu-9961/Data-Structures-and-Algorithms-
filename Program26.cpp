#include<iostream>
using namespace std;
void set(int *p);

int main()
{
	int n;
	//int *ptr;
	
	cout<<"Enter:\t";
	cin>>n;
	cout<<endl;
	
	set(&n);
	cout<<n;
	
}

void set(int *p)
{
	*p=20;
}
