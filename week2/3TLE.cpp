#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//到10的5次方时会TLE,因为已经O(m+n)了，是10e10，太大了，这个思路不行，必须在输入时就分到对应的桶里。
struct element
{
    int no;
    int x;
    element(){}
    element(int x1,int no1){
        x = x1;
        no = no1;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;
    vector<element> data;
    int i;
    for (i = 0; i < m; i++)
    {
        int no, x;
        cin >> x >> no;
        element curr(x,no);
        data.push_back(curr);
    }
    for(int j=1; j<=n; j++){
        vector<int> bucket;
        for(int k=0; k<i; k++){
            if(data[k].no==j){
                bucket.push_back(data[k].x);
            }
        }
        sort(bucket.begin(),bucket.end());
        for(auto it=bucket.begin();it !=bucket.end(); it++){
            cout<<*it<<' ';
        }
        cout<<endl;
    }
    return 0;
}