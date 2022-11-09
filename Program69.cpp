#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int arr[3][3];
    cout << "ENter Elements" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Element: R-" << i << " and C-" << j << endl;
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Element: R-" << i << " and C-" << j << endl;
            cout << arr[i][j];
        }
    }
}