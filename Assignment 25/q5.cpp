#include <iostream>
using namespace std;

class ReverseNumber{
    int n;
    public:
    void setNumber(){
        cout<<"Enter a number : ";
        cin>>n;
    }

    int Reverse(){
        int m=0;
        while(n>0){
            m = m*10 + n%10;
            n=n/10;
        }
        return m;
    }
};

int main(){
    ReverseNumber r;
    r.setNumber();
    cout<<"Reversed number is : "<<r.Reverse()<<endl;;
    return 0;
}