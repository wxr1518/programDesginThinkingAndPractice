#include <iostream>
#include <climits>
using namespace std;
// 缩短时间
int main()
{
    int a[101];//发现数学规律，得知最佳位置就是均值上下
    int n;
    int max = 1;
    int min = 100;
    cin >> n;
    int totalValue=0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        totalValue +=a[i];
    }
    int meanValue = totalValue/n;
    int res = 0;
    int finalRes = INT_MAX;
    for (int i = meanValue; i <= meanValue+1; i++)
    {
        res = 0;
        for (int j = 0; j < n; j++)
        {
            res += (a[j] - i) * (a[j] - i);
        }
        if (res < finalRes)
        {
            finalRes = res;
        }
    }
    cout << finalRes << endl;
    return 0;
}