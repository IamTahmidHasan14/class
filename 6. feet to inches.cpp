#include<iostream>
using namespace std;
class Distance
{
    int ft;
    float inc;
    public:
    void set(int x, float y)
    {
        ft=x; inc=y;
    }
    void disp()
    {
        cout<<"\n\nFeet: "<<ft<<"\nInches: "<<inc;
    }
    Distance add(Distance X,Distance Y)
    {
        inc=(X.inc+Y.inc);
        ft=0;
        for(;inc>=12.0;)
        {
            inc-=12.0;
            ft++;
        }
        ft+=(X.ft+Y.ft);
    }
};
int main()
{
    int a; float b;
    Distance A,B,C;
    cout<<"Enter 1st Feet(Integer): ";
    cin>>a;
    cout<<"Enter 1st Inches: ";
    cin>>b;
    A.set(a,b);
    cout<<"Enter 2nd Feet(Integer): ";
    cin>>a;
    cout<<"Enter 2nd Inches: ";
    cin>>b;
    B.set(a,b);
    C.add(A,B);
    A.disp();
    B.disp();
    C.disp();
    return 0;
}
