#include <iostream>
using namespace std;

class Time{
    int hour;
    int minute;
    int second;
    public:
    void setTime(){
        cout<<"Enter hours : ";
        cin>>hour;
        cout<<"Enter minutes : ";
        cin>>minute;
        cout<<"Enter second : ";
        cin>>second;
    }

    void getTime(){
        if(second>=60){
            minute+=second/60;
            second=second%60;
        }
        if(minute>=60){
            hour+=minute/60;
            minute=minute%60;
        }
        cout<<"Time is : "<<hour<<" hr "<<minute<<" min "<<second<<" sec\n";
    }
};

int main(){
    Time t;
    t.setTime();
    t.getTime();
}