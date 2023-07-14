#include<iostream>
using namespace std;
class maximum
{
    public:
    maximum(int x, int y){
        if(x > y){
            cout<<"Largest is: "<<x<<endl;
        }
        else{
            cout<<"Largest is: "<<y<<endl;
        }
    }
};
int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y ;
    maximum(x, y);
    return 0;
}
