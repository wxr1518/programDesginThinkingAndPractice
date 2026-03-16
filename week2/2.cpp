#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int num;
    int data[1000] = {};
    int t;
    cin >> num;
    for (int i = 0; i < num; i++)
    {
        cin >> t;
        data[i] = t;
    }
    int processData[1000]={};
    for (int j = 0; j < num; j++)
    {
        int sum = 0;
        for(int k=0; k<=j; k++){
            if(data[k]==data[j]){
                sum++;
            }
        }
        processData[j]=sum;
    }
    for (int l = 0; l < num; l++)
    {
        cout<<processData[l]<<' ';
    }
    return 0;
}