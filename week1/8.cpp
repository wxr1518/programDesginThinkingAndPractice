#include <iostream>
#include <vector>


int F(int x){     //g1-g2
    int a[10000]={};
    int size=0;
    for(size=0; x!=0; size++){
        a[size]=x%10;
        x/=10;
    }
    for(int j=0; j<size-1; j++){
        for(int k=0; k<size-1-j; k++){
            if(a[k]<a[k+1]){
                int t = a[k+1];
                a[k+1] = a[k];
                a[k] = t;
            }
        }
    }
    int g1=0;
    for (int i=0; i<size; i++)
    {
        g1=g1*10+a[i];
    }
    int g2=0;
    for (int j =size; j >=0; j--)
    {
        g2 = g2*10+a[j];
    }
    //std::cout<<g1<<" "<<g2<<std::endl;
    return g1-g2;
}
int main()
{
    int N,K;
    std::cin>>N>>K;
    int t = N;
    for(int i=0; i<K; i++){
        t =F(t);
    }
    std::cout<<t<<std::endl;
    return 0;
}