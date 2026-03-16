#include <iostream>
using namespace std;

int main()
{
    int N;
        while (cin >> N)
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