#include <iostream>
#include <vector>
using namespace std;
void printVec(vector<int> &v)
{
    cout << "Size:"
         << " " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // Array of Vectors Concept
    int N;
    cout << "Total Vectors:"
         << " ";
    cin >> N;
    vector<int> v[N];

    for (int i = 0; i < N; i++)
    {
        int n;
        cout << "Inside Vectors Elements:"
             << " ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;

            cin >> x;
            v[i].push_back(x);
        }
    }

    cout << "\n"
         << endl;

    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }
    return 0;
}