#include <iostream>
#include <typeinfo>

int main(){
    int i = 0;
    int j = 0;
    std::cin>>i>>j;
    int *p = &i;

    p = &j;
    std::cout<<*p<<std::endl;

}