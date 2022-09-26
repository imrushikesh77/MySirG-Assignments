#include <iostream>
using namespace std;

class Greatest{
    int a,b,c;
    public:
    void setNumber(){
        cout<<"Enter three number : ";
        cin>>a>>b>>c;
    }

    void GreatestNum(){
        int x=a,y=b,z=c;
        if(x>=y && x>=z)
        cout<<"Largest number is : "<<x<<endl;
        else if(y>=x && y>=z)
        cout<<"Largest number is : "<<y<<endl;
        else
        cout<<"Largest number is : "<<z<<endl;
    }
};

int main(){
    Greatest l;
    l.setNumber();
    l.GreatestNum();
}