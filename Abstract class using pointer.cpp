#include<iostream>
using namespace std;
class shape
{
public:
    double a,b;
    void get_data()
    {
        cout<<"enter :";
        cin>>a;
        cin>>b;
    }
    virtual void display_area()=0;
};
class triangle:public shape
{
public:
    void display_area()
    {
        cout<<"Area of triangle:"<<0.5*(a*b);
        cout<<"\n";
    }
};
class rectangle:public shape
{
public:
     void display_area()
    {
        cout<<"Area of rectangle:"<<a*b;
    }
};
int main()
{
    shape *p;
    triangle a;
    p=&a;
    p->get_data();
    ((triangle*)p)->display_area();
    rectangle b;
    p=&b;
    p->get_data();
    ((rectangle*)p)->display_area();
    return 0;
}
