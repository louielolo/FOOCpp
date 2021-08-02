#include <iostream>
#include <stdlib.h>

int main(){
    /*使用指针将a的值从1改为2  */
    //2.18
    int a = 1;
    int *p;
    p = &a;
    *p = 2;
    //2.20
    int i = 42;
    int *p1 =  &i;
    *p1 = *p1**p1;
    //2.21
    int k = 0;
    //double *dp = &k;
    //int *dp = k;
    int *dp = &k;
    std::cout<<"a value is :"<<a<<std::endl;
    std::cout<<"i value is :"<<i<<std::endl;
}