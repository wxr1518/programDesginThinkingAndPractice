#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
//这道题用vector一定会超时，要用set
// 操作  |   vector    |       set
// 查找  |   O(n)慢    |   O(log n) 极快
// 删除  |   O(n)慢    |   O(log n) 极快
// 排序  | O(n log n)  |  自动有序，不用排
//       |每次都要排    |

      
int main()
{
    int m;
    cin >> m;
    vector<string> data;
    for (int i = 0; i < m; i++)
    {
        int op;
        string temp;
        cin >> op;
        switch (op)
        {
        case 1:{
            cin>>temp;
            if(find(data.begin(),data.end(),temp) != data.end())
            {
                cout<<"found"<<endl;
            }else{
                cout<<"write"<<endl;
                data.push_back(temp);
            }
            break;
        }
        case 2:{
            cin >> temp;
            auto it =find(data.begin(), data.end(), temp);
            if (it != data.end())
            {
                data.erase(it);
                cout<<"erased"<<endl;
            }
            else
            {
                cout << "not found" << endl;
            }
            break;
        }
        case 3:{
            sort(data.begin(),data.end());
            for(string str:data){
                cout<<str<<" ";
            }
            cout<<"\n";
            break;
        }
        default:{
            break;
        }
        }
    }
    return 0;
}