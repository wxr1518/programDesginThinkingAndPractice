#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(3);
    double a, b;
    cin >> a >> b;
    double sale;
    sale = 100 * ((a - b) / a);
    cout << sale << endl;
    return 0;
}