#include<iostream>
using namespace std;
class complex{
    int a,b;
public:
    void set_data(int,int);
    void show_data()
    { cout<<a<<" "<<b;}
    complex add(complex c)
    {
        complex temp;
        cout<<"a = "<<a<<endl;
        cout<<"c.a = "<<c.a<<endl;
        temp.a=a+c.a;
        cout<<"temp.a ="<<temp.a<<endl;;
        temp.b=b+c.b;
        cout<<"temp-b ="<<temp.b<<endl;;
        return temp;
    }
};
void complex:: set_data(int x,int y)
{a=x;b=y;}
int main()
{
    complex x,y,z;
    x.set_data(4,7);
    y.set_data(2,1);
    z=x.add(y);
    z.show_data();
}