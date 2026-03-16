#include <iostream>

using namespace std;

int main(){
    int sum=0;
    int num;
    int data[1000]={};
    int t;
    cin>>num;
    for(int i=0; i<num; i++){
        cin>>t;
        data[i]=t;
    }  
    // for(int i=0; i<num; i++){
    //     cout<<data[i]<<endl;
    // }  
    for(int j=1; j<num; j++){//插入排序
        int key= data[j];
        int k= j-1;
        while(k>=0&& data[k]>key){
            data[k+1]= data[k];
            k--;
        }
        data[k+1]= key;
    }
    for(int l=0; l<num-1; l++){
        if(data[l]+1==data[l+1]){
            sum++;
        }
    }
    cout<<sum<<endl;
    return 0;
}