#include<iostream>
using namespace std;

struct student
{
	int stuID[10];
	char stuStatus[10];
	char stuSec[3];
	double stuPhn[100];
};

int main()
{
	struct student stuObj[3];
	
	for(int i=0;i<3;i++)
	{
		cout<<"Enter Details of Student-"<<(i+1)<<" :"<<endl;
		
		cout<<"Enter ID of student-"<<(i+1)<<" :";
		cin>>stuObj[i].stuID[i];
		
		cout<<"Enter Status of student-"<<(i+1)<<" :";
		cin>>stuObj[i].stuStatus[i];
		
		cout<<"Enter Section of student-"<<(i+1)<<" :";
		cin>>stuObj[i].stuSec[i];
		
		cout<<"Enter Phone No of student-"<<(i+1)<<" :";
		cin>>stuObj[i].stuPhn[i];
		
		cout<<"\n"<<endl;
	}
	
	cout<<"\n"<<endl;
	
	for(int i=0;i<10;i++)
	{
		cout<<"Details for Student-"<<(i+1)<<" is:"<<endl;
		
		cout<<"ID: ";
		cout<<stuObj[i].stuID[i]<<endl;
		
		cout<<"Status: ";
		cout<<stuObj[i].stuStatus[i]<<endl;
		
		cout<<"Section: ";
		cout<<stuObj[i].stuSec[i]<<endl;
		
		cout<<"Phone No: ";
		cout<<stuObj[i].stuPhn[i]<<endl;
		
		cout<<"\n"<<endl;
	}
	
	return 0;
}
