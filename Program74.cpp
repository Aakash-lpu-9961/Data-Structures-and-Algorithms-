#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    vector<vector<int>> v;
    int N;
    cout << "Total Vectors:"
         << " ";
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        int n;
        vector<int> temp;
        cout << "Inside Vector Size of v-" << i + 1 << " ";
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;

            temp.push_back(x);
        }
        v.push_back(temp);
    }
    for (int i = 0; i < N; i++)
    {
        printVec(v[i]);
    }

    return 0;
}