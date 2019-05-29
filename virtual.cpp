#include <iostream>
using namespace std;

class Base
{
public:Base(){}
public:
       void print1(){cout<<"---Base1---"<< endl;}
       virtual void print2(){cout<<"---Base2---"<< endl;}
};
 
class Derived:public Base
{
public:Derived(){}
public:
       void print1(){cout<<"---Derived1---"<< endl;}
       void print2() override {cout<<"---Derived2---"<< endl;} 
};
 
int main()
{
    Base entity1;
    Derived entity2;
    Base *point1 = &entity2;
    Derived *point2 = &entity2;
    point1->print1();
    point1->print2();
    
    point2->print1();
    point2->print2();

    entity1.print1();
    entity1.print2();

    entity2.print1();
    entity2.print2();
}
