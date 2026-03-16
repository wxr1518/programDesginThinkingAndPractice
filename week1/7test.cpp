#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    cout<<sin(30)<<endl;//输入的是弧度制
    cout<<cos(3*M_PI/4)<<endl;//输入的是弧度制
    cout<<cos(M_PI/4)<<endl;//输入的是弧度制
    cout<<cos(-M_PI/4)<<endl;//输入的是弧度制

    // double sin(double x);
    // float sinf(float x);
    // long double sinl(long double x);  示例
    return 0;
}