#include<iostream>
using namespace std;

int main()
{
	void *ptr;
	int *ptr1;
	int a=23;

	ptr=&a;
	
	ptr1 = (int*)ptr;
	
	cout<<*ptr1;
	
	
	return 0;

}
