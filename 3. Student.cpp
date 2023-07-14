#include<iostream>
using namespace std;
class st{
    public:
        void STUDENT(int id, string name, string dept, string section);
        void STUDENT(int id, string name, string dept);
        void STUDENT(int id, string name, double CGPA);
};
void st::STUDENT(int id, string name, string dept, string section){
    cout<< id << " " << name << " " << dept << " " << section << endl;
}
void st::STUDENT(int id, string name, string dept){
    cout<< id << " " << name << " " << dept << " " << endl;
}
void st::STUDENT(int id, string name, double CGPA){
    cout<< id << " " << name << " " << CGPA << " " << endl;
}
int main(){
    string str1 = "Tahmid";
    string str2 = "CSE";
    string str3 = "A";
    st ob;
    ob.STUDENT(193311067, str1, str2, str3);
    ob.STUDENT(193311067, str1, str2);
    ob.STUDENT(193311067, str1, 4.00);
}
