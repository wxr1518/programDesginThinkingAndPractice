#include <iostream>
using namespace std;

int main()//注意while的使用，可以写cin>>
{
    int N;
    while (cin>>N&&N != 0)
    {
        int res = 0;
        int t;
        for (int i = 0; i < N; i++)
        {
            cin >> t;
            res += t;
        }
        cout << res << endl;
    }
    return 0;
}