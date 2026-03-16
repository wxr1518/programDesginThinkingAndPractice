#include <iostream>
#include <sstream>

int main()
{
    std::string data = "30 40.5";
    std::stringstream ss(data);

    int i;
    double d;

    // 从stringstream读取数据
    for(int j=0; j<2; j++){
        ss >> i ;
        std::cout<<i<<std::endl;
        std::cout<<data<<std::endl;
    }

    std::cout << "Read Integer: " << i << ", Double: " << d << std::endl;

    // 向stringstream写入数据
    ss.str(""); // 清空stringstream
    ss << "New data: " << 50 << " " << 60.7;

    std::string newData = ss.str();
    std::cout << "New data string: " << newData << std::endl;

    return 0;
}