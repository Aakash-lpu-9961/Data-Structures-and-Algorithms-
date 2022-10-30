#include<iostream>
using namespace std;
class base
{
	public:
		virtual void disp(void)
		{
			cout<<"Base Class Disp"<<endl;
		}
		virtual void show(void)
		{
			cout<<"Base Class Show"<<endl;
		}
};
class derived : public base
{
	public:
		// void disp(void)
		// void show(void)
		
		void disp(void)
		{
			cout<<"Derived Class Disp"<<endl;
		}
		void show(void)
		{
			cout<<"Derived Class Show"<<endl;
		}
};

int main()
{
	//derived *ptr;  // Derived Class Pointer
	base *ptr;     // Base Class Pointer
	base b;
	derived d;
	
	ptr = &b;     // Base Class Pointer Pointing to Object of Base Class Itself
	ptr->disp();
	ptr->show();
	
	ptr = &d;
	ptr->disp();
	ptr->show();
	
	return 0;
}


