#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string N;
    while (getline(cin,N))
    {
        stringstream ss(N);
        int res = 0;
        int t;
        while (ss>>t)
        {
            res += t;
        }
        cout << res << endl;
    }

    return 0;
}