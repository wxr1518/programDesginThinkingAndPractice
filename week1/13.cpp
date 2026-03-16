#include <iostream>
using namespace std;

int main()
{
    int N ,M;
    cin>>M;
    for(int i=0; i<M; i++){
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
    }
    return 0;
}