#include<iostream>
using namespace std;
class integer
{
private:
    int a;
public:
    void setdata(int x)
  {a=x;}
    void showdata(){
    cout<<"a="<<a<<endl; }
    integer operator++(int)
    {
        integer c;
        c.a=a++;
        return c;
    }
    //for pre increment
    /*integer operator++(int)
    {
        integer c;
        c.a=++a;
        return c;
    }*/
    friend integer fun(integer);
};
integer fun(integer i)
{
    i.a=i.a+2;
    return i;
}
int main ()
{
    integer c1,c2;
    c1.setdata(5);
    //c2=c1++;
    //c2.showdata();
    c2=c1++;
    fun(c2);
    c2.showdata();
    c1.showdata();

}
