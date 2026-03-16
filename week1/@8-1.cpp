#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
//学会用STL，后面研究vector和algorithm中函数的用法
int F(int x)
{ // g1-g2
    vector<int> a; 
    while (x != 0)
    {
        a.push_back(x % 10);
        x /= 10;
    }
    int size = a.size();

    sort(a.begin(),a.end(),greater<int>());

    // g1
    int g1 = 0;
    for (int j = 0; j < size; j++)
    { 
        g1 = g1 * 10 + a[j];
    }

    // g2
    int g2 = 0;
    for (int j = size - 1; j >= 0; j--)
    { 
        g2 = g2 * 10 + a[j];
    }

    //cout << g1 << " " << g2 << endl;
    return g1 - g2;
}

int main()
{
    int N, K;
    std::cin >> N >> K;
    int t = N;
    for (int i = 0; i < K; i++)
    {
        t = F(t);
    }
    std::cout << t << std::endl;
    return 0;
}