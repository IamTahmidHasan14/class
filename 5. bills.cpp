#include<iostream>
using namespace std;
int main()
{
    int c;
    float b=300;
    cout<<"Enter number of calls: ";
    cin>>c;
    if(c>100)
    {
        c-=100;
        cout<<"\nFor first 100 calls: 300 Taka\n";
    if(c<=60)
    {
        b+=c*0.8;
        cout<<"For next "<<c<<" calls: "<<b-300<<" Taka";
    }
    else if(c<=100)
    {
        c-=60;
        b+=48+(c*0.6);
        cout<<"For next 60 calls: 48 Taka";
        cout<<"\nFor next "<<c<<" calls: "<<b-348<<" Taka";
    }
    else
    {
        c-=100;
        b+=72+(0.4*c);
        cout<<"For next 60 calls: 48 Taka";
        cout<<"\nFor next 40 calls: 24 Taka";
        cout<<"\nFor next "<<c<<" calls: "<<b-372<<" Taka";
    }
    }
    cout<<"\n\nTotal bill: "<<b<<" Taka"<<endl;
    return 0;
}
