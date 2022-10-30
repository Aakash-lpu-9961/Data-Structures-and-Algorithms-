#include<iostream>
using namespace std;

int *get()
{
	static int i=100;
	return &i;
}

int main()
{
	int *ptr = get();
	cout<<*ptr;
	
	return 0;
}
