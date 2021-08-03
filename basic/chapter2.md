/***********************************************************************/
p2.3 读程序写结果
    2.3.1 
    unsigned u=10,u2=42;
    u2-u = 42 -10 = 32
    u-u2 = 10 + -42 = 10 + -42的补码
    unsigned是32位，4个字节
    00000000 00000000 00000000 00000000
    -42原码：
    10000000 00000000 00000000 00101010
    -42补码=反码(符号位不变，其余反转)+1
    11111111 11111111 11111111 11010110
    -42 + 10 = + 00001010
    11111111 11111111 11111111 11100000
    = 4294967264
    
    2.3.2
    int i = 10,i2 = 42;
    i2 - i = 42 - 10 = 32
    i - i2 = 10 + -42 = -32
    i - u = unsigned 10 + unsigned -10(当算数表达式有int，有unsigned；int会转为unsigned)
    -10源码:
    10000000 00000000 00000000 00001010
    -10补码:
    11111111 11111111 11111111 11110110
    -10 + 10 = + 00001010
    00000000 00000000 00000000 00000000
    =0
    u - i = unsigned 10 + unsigned -10
    = 0
/*************************************************************************/
page 38
p2.5
Q:指出下述字面值的数据类型并说明区别
'a',L'a',"a",L"a"
10,10u,10L,10uL,012,0xC
3.14,3.14f,3.14L
10,10u,10.,10e-2
A:
char,wide char,string,string wide char
decimal,unsigned decimal,long decimal,unsigned long decimal,octal,hex
double,float,long double
decimal,unsigned decimal,double,double

p2.6
Q:下面两组定义是否有区别
int month = 9, day = 7;
int month = 09, day = 07;
A:
int month = 09 is invalid, octal has no digit 9
day is octal

p2.7
下述字面值表示何种含义？各自的数据类型是什么
a."Who goes with F\145rgus?\012"
b.3.14e1L
c.1024f
d.3.14L
A:
a.string, \145 = 'e', \012 = \n
b.31.4 long double
c.1024 float
d.3.14 long double
/************************************************************************************/
page 40
p2.9
Q:解释下列定义的含义。有错误的指出错误
a.std::cin>> int input_value;
b.int i = {3.14};
c.double salary = wage = 9999.99;
d.int i  = 3.14;
A:
(a): error: expected '(' for function-style cast or type construction.
int input_value = 0;
std::cin >> input_value;
(b): error: type 'double' cannot be narrowed to 'int' in initializer list.
double i = { 3.14 };
(c): if declared 'wage' before, it's right. Otherwise, error would be happened: error: use of undeclared identifier 'wage'
double wage;
double salary = wage = 9999.99;
(d): Ok: but value will be truncated.
double i = 3.14;

p2.10
下列变量的初值分别是什么？
/******************************************************************************************/
page42，43
p2.11
下列语句是声明还是定义
a.extern int ix = 1024;//定义
b.int iy;//定义
c.extern int iz;//声明

p2.12
以下哪些名字非法？
a.int double = 3.14;非法double
b.int _;
c.int catch-22;非法-
d.int 1_or_2 = l;非法_直接连字母
e.double Double = 3.14;合法
/********************************************************************************************/
page45
p2.13
Q:j的值是多少
int i = 42;
int main()
{
    int i = 100;
    int j = i;
}
A:j = 100

p2.14
int i = 100, sum = 0;
for (int i = 0; i != 10; ++i)
        sum += i;
std::cout << i <<" "<< sum << std::endl;
A: 100 45
/*******************************************************************************************/
page 46
p2.15
Q:定义不合法
a.int ival = 1.01;合法
b.int &rvall = 1.01;不合法
c.int &rval2 = ival;合法，
d.int &rval3;不合法，引用要有对象

p2.16
Q:哪些赋值不合法？执行什么操作
int i = 0,&r1 = i; double d = 0,&r2 = d;
a.r2 = 3.14159;合法，相当于d=3.14159
b.r2 = r1;合法，double 变为int
c.i = r2;合法？？
d.r1 = d;合法？？
/***************************************************************************************/
page 51
p2.19
说明指针与引用的区别：
指针需要定义甚至初始化，存储对象的地址，本身是个对象
引用是被引用对象的别名，公用同一个地址

p2.20
让i的值变为1764

p2.21
(1)非法，double类型指针不能指向整型引用
(2)非法，指针不能直接指向变量的值
(3)合法

p2.22
(1)指针是否为空
(2)指针是否指向0值

p2.23
不能

p2.24
long型指针不能指向整型对象，空型指针指谁都行
/****************************************************************************************/
page53
p2.25 说明下列变量的类型和值
a) int* ip,i, &r = i;
定义了指向整型的指针ip，整型i，r引用了i
b) int i, *ip=0;
初始化了空指针ip，定义了整型i
c) int* ip,ip2;
定义了指向整型的指针ip，定义了整型ip2

page54
p2.26
(a)const int buf;
(b)int cnt = 0;
