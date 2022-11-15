#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &nums)
{
    vector<vector<int>> v;
    vector<int> temp;
    int sum = 1;
    for (int i = 0; i < nums.size() - 2; i++)
    {
        for (int j = i + 1; j < nums.size() - 1; j++)
        {
            for (int k = j + 1; k < nums.size(); k++)
            {
                sum = nums[i] + nums[j] + nums[k];
                if (sum == 0)
                {
                    temp.push_back(nums[i]);
                    temp.push_back(nums[j]);
                    temp.push_back(nums[k]);

                    v.push_back(temp);
                    temp.pop_back();
                    temp.pop_back();
                    temp.pop_back();
                }
                sum = 1;
            }
        }
    }
    // cout<<v.size();
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<int> nums;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        nums.push_back(x);
    }
    printVec(nums);
}