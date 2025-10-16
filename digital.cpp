#include<iostream>
#include<iomanip>
using namespace std;
class DigitalC{
    private:
    int hours,minutes,seconds;
    public:
    DigitalC(int h,int m,int s){
        hours=h;
        minutes=m;
        seconds=s;
    }
    void displayTime(){
        if (hours<10)
        cout<<setfill('0')<<setw(2)<<hours<<":"<<setw(2)<<minutes<<":"<<setw(2)<<seconds<<" ";

       else if (minutes<10)
        cout<<setfill('0')<<setw(2)<<hours<<":"<<setw(2)<<minutes<<":"<<setw(2)<<seconds<<" ";

        else if(seconds<10)
        cout<<setfill('0')<<setw(2)<<hours<<":"<<setw(2)<<minutes<<":"<<setw(2)<<seconds<<" ";
        if(hours>=12)
        cout<<"pm";
        else
         cout<<"am";
    }

};
int main(){
int hours,minutes,seconds;
cout<<"enter hours;";
cin>>hours;
cout<<"enter minutes;";
cin>>minutes;
cout<<"enter seconds;";
cin>>seconds;
DigitalC clock(hours,minutes,seconds);
clock.displayTime();
return 0;
}