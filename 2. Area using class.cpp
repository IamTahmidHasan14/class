#include<iostream>
using namespace std;
class Area
{
    int n;
    public:
        void showArea(float pi, float radius);
        void showArea(int l, int w, int h);
};
void Area::showArea(float pi, float radius)
{
    cout<<"Area of a circle: "<<pi * radius * radius<<" meter square"<<endl;
}
void Area::showArea (int l, int w, int h)
{
    cout<<"Volume of a box: "<< l * w * h << " meter cube" << endl;
}
int main(){
    Area ob;
    ob.showArea(3.1416, 5.5);
    ob.showArea(10, 15, 20);
}
