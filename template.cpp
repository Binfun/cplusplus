#include <iostream>
using namespace std;


class test
{
public:
template<class T1,class T2>
void show(int a)
{
cout<<"---11-a="<<a<<endl;
}
template<class T>
static void show2(void)
{
cout << "show11112233"<<endl;
}


};

template<class T>
class test1
{
public:
void show1(void)
{
     a.template show<T,T>(10);
     test::show2<T>(); //can pass the compile
}
private:
test    a;
};

int main(void)
{
    test1<int>  a;
    a.show1();
    return 1;
}

