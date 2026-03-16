#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//使用了vector容器和sort函数后时间和空间都有下降
int main()
{
    int sum = 0;
    int num;
    vector<int> data;
    int t;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> t;
        data.push_back(t);
    }
    // for(int i=0; i<num; i++){
    //     cout<<data[i]<<endl;
    // }
    sort(data.begin(),data.end());
    for (int l = 0; l < num - 1; l++)
    {
        if (data[l] + 1 == data[l + 1])
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}