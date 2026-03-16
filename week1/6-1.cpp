#include <iostream>
#include <climits>
using namespace std;
//缩短时间
int main()
{
    int a[101];
    int n;
    int max=1;
    int min=100;
    cin >> n;
    for (int i = 0; i < n; i++)//确定上下界
    {
        cin >> a[i];
        if(min>a[i]){
            min=a[i];
        }
        if(max<a[i]){
            max=a[i];
        }
    }
    int res = 0;
    int finalRes = INT_MAX;
    for (int i = min; i <= max; i++)
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