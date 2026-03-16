#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    // 加速 cin/cout，必须加！
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m;
    cin >> m;
    set<string> s; // 用 set 代替 vector

    while (m--)
    {
        int op;
        string str;
        cin >> op;

        if (op == 1)
        {
            cin >> str;
            // count() 查找：存在=1，不存在=0
            if (s.count(str))
                cout << "found\n";
            else
            {
                cout << "write\n";
                s.insert(str);
            }
        }
        else if (op == 2)
        {
            cin >> str;
            if (s.erase(str)) // erase 成功返回1
                cout << "erased\n";
            else
                cout << "not found\n";
        }
        else if (op == 3)
        {
            // set 自动有序，直接遍历输出
            for (auto &x : s)
                cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}