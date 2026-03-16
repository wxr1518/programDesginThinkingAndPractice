#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int a[101];
    int n;
    cin >> n ;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int res=0;
    int finalRes=INT_MAX;
    for (int i = 1; i <= 100; i++)
    {
        res=0;
        for(int j=0; j<n; j++){
            res+=(a[j]-i)*(a[j]-i);
        }
        if(res<finalRes){
            finalRes = res;
        }
    }
    cout<<finalRes<<endl;
    return 0;
}