#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    int YorN = 0;
    cin >> n;
    int size = n.length();
    for (int i = 1; i <= size; i++)
    {
        if (i % 2 == 1)
        {
            if (n[i-1] > 90)
            {
                continue;
            }
            else
            {
                cout << "No" << endl;
                YorN++;
                break;
            }
        }
        else
        {
            if (n[i-1] <= 90)
            {
                continue;
            }
            else
            {
                cout << "No" << endl;
                YorN++;
                break;
            }
        }
    }
    if (YorN == 0)
    {
        cout << "Yes" << endl;
    }

    return 0;
}