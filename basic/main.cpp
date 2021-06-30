#include<iostream>
using namespace std;
int main()
{
    //std为namespace避免名字冲突，::为作用域运算符，指出命名空间std中的cout
    std::cout <<"Enter two numbers"<< std::endl;//endl可将与设备关联缓冲区刷到设备，不是停留在内存等着输入流
    int v1 = 0, v2 = 0;//初始化定义
    std::cin >> v1 >> v2;//箭头表示流向，从输入流流到变量中
    std::cout <<"The sum of "<< v1 << " and "<<v2
              <<" is "<<v1+v2<< std::endl;
    return 0;
}
