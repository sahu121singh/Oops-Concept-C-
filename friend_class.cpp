#include<iostream>
using namespace std;

class A
{
    int a,b;
public:
    A()
    {
        cout<<"\n enter the number 1:";
        cin>>a;
        cout<<"\n enter the number 2";
        cin>>b;
    }
    friend class B;
};
class B
{
    int b;
public:
    void show(A x)

    {
     cout <<"a is:"<<x.a<<"\n b is:"<<x.b;
    }
};


int main()
{
    A a1;
    B b1;
    b1.show(a1);
    return 0;

}
