#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
// 不可能出现时针正好指10的同时分针指8，在分针指8时时针已经超过10一大半了
int main()
{
    cout<<fixed<<setprecision(9);
    double a, b, H, M;
    cin >> a >> b >> H >> M;
    double theta = ((H * 30 + (M / 60) * 30 - M * 6) * M_PI / 180);
    double c = sqrt(a * a + b * b - 2 * a * b * cos(theta));
    cout<<c<<endl;
    // cout<<theta<<endl;
    return 0;
}