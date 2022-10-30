#include<iostream>
using namespace std;

int *get()
{
	int i=100;
	return(&i);
}

int main()
{
 int *ptr = get();
 cout<<*ptr;
 return 0;
}
