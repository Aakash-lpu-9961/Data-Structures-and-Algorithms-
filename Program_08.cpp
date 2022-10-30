#include<iostream>
using namespace std;

int main()
{
	int a=2;
	int *b;
	int **c;
	int ***d;
	int ****e;
	
	b = &a;
	
	cout<<"value of b:"<<*b<<endl;

	//Pointer to Pointer
	
	c = &b;
	
	cout<<"Value of c:"<<**c<<endl;
	
	d=&c;
	
	cout<<"Value of d:"<<***d<<endl;
	
	e=&d;
	
	cout<<"Value of e:"<<****e<<endl;
	
	cout<<"sizeof variable a is:"<<sizeof(a)<<endl;
	cout<<"sizeof pointer *b is:"<<sizeof(*b)<<endl;
	cout<<"sizeof pointer **c is:"<<sizeof(**c)<<endl;
	cout<<"sizeof pointer ***d is:"<<sizeof(***d)<<endl;
	cout<<"sizeof pointer ****e is:"<<sizeof(****e)<<endl;
	
	
	return 0;
}
