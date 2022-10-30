#include<iostream>
using namespace std;

struct employee
{
    int empID[56];
    long empSal[56];
    int empAge[56];
};

int main()
{
   struct employee emp[3];

    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter Employee-"<<(i+1)<<"ID:\t";
        cin>>emp[i].empID[i];
        cout<<"\n";

        cout<<"Enter Employee-"<<(i+1)<<"Salary:\t";
        cin>>emp[i].empSal[i];
        cout<<"\n";

        cout<<"Enter Employee-"<<(i+1)<<"Age:\t";
        cin>>emp[i].empSal[i];
        cout<<"\n";

    }

    cout<<"\n";
    

    return 0;
}
