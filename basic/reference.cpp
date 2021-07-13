#include <iostream>

int main() {
    int i = 0,&r1 = i;
    double j = 0;
    double d = 0,&r2 = j;
    r2 = 3.14159;
    std::cout<<i<<", "<<r1<<", "<<d<<", "<<r2<<std::endl;
    r1 = r2;
    std::cout<<i<<", "<<r1<<", "<<d<<", "<<r2<<std::endl;
    i = r2;
    std::cout<<i<<", "<<r1<<", "<<d<<", "<<r2<<std::endl;
    r1 = d;
    std::cout<<i<<", "<<r1<<", "<<d<<", "<<r2<<std::endl;
    int i1,&ri1 = i1,&ri2 = ri1,&ri3 = ri2;
    ri3 = 1;
    std::cout<<i1<<", "<<ri1<<", "<<ri2<<", "<<ri3<<std::endl;
    return 0;
}