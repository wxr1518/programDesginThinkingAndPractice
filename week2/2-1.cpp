#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//为什么用了迭代器变慢了？
int main()
{
    int num;
    vector<int> data;
    int t;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> t;
        data.push_back(t);
    }
    vector<int> pData;
    for (auto it = data.begin(); it != data.end(); ++it)
    {
        int sum = 0;
        for (auto k = data.begin(); k <=it; k++)
        {
            if (*k == *it)
            {
                sum++;
            }
        }
        pData.push_back(sum);
    }
    for (auto l = pData.begin(); l != pData.end(); l++)
    {
        cout << *l << ' ';
    }
    return 0;
}