#include<iostream>
using namespace std;
class Cricket
{
    string bcode;
    char bname[20];
    int innings, notout, runs, batavg;
    int calcavg()
    {
        return (runs/(innings-notout));
    }
public:
    void readdata()
    {
        cout<<"Enter Team Name: ";
        cin>>bname;
        cout<<"Enter 4 digit code: ";
        cin>>bcode;
        cout<<"Enter Innings: ";
        cin>>innings;
        cout<<"Enter number of not-out player: ";
        cin>>notout;
        cout<<"Enter Runs: ";
        cin>>runs;
        batavg= calcavg();
    }
void displaydata()
{
    cout<<"\n\nName: "<<bname
    <<"\nCode: "<<bcode
    <<"\nInnings: "<<innings
    <<"\nNot-Out: "<<notout
    <<"\nRuns: "<<runs
    <<"\nBatman's average: "<<batavg<<endl;
}
};
int main()
{
    Cricket bd;
    bd.readdata();
    bd.displaydata();
    return 0;
}
