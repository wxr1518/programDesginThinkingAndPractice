#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//vector可以用变量初始化
int main()
{
    int n,m;
    cin >> n >> m;
    vector<vector<int>> data(n+1);
    vector<int> bucket;
    for (int i = 0; i < m; i++)
    {
        int no,x;
        cin >> x>> no;
        data[no].push_back(x);//向二维vector操作只需要加‘[]’让第一维确定就行，后面操作就一样了
    }
    //sort(data.begin(), data.end());
    for (int j = 1; j <= n; j++)
    {
        sort(data[j].begin(),data[j].end());
        for(int num:data[j])// 注意这种 C++11 范围 for 循环
        {
            cout<<num<<' ';
        }
        cout<<'\n';//注意换行的方式
    }

    return 0;
}