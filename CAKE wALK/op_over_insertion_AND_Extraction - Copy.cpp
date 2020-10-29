#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
    void setdata(int x,int y)
     {a=x;b=y;}
     /*void showdata()
     {
        cout<<"a is="<<a<<" b is="<<b;;
     }*/
     friend ostream& operator<<(ostream&,complex);
     friend istream& operator>>(istream&,complex&);
};
ostream& operator<<(ostream &cout,complex c)
{
    cout<<"a="<<c.a<<" b="<<c.b;
    return cout;
}
istream& operator>>(istream &cin,complex &c)
{
    cin>>c.a>>c.b;
    return cin;
}
int main()
{
    complex c1;
    cout<<"Enter your val ";
    cin>>c1;
    cout<<"Your val is ";
    cout<<c1;
}

