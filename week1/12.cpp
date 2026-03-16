#include <iostream>
using namespace std;

int main()
{
    int N=1;
    while (N!=0)
    {
        cin >> N;
        if(N==0){
            break;
        }
        int res =0;
        int t;
        for(int i=0; i<N; i++){
            cin>>t;
            res+=t;
        }
        cout << res << endl;
    }
    return 0;
}