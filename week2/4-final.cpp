#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
    int m;
    cin >> m;
    set<string> s; 

    while (m--)
    {
        int op;
        string str;
        cin >> op;

        if (op == 1)
        {
            cin >> str;
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
            if (s.erase(str))
                cout << "erased\n";
            else
                cout << "not found\n";
        }
        else if (op == 3)
        {
            for (auto &x : s)
                cout << x << " ";
            cout << "\n";
        }
    }
    return 0;
}