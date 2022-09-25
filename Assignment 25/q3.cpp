#include <iostream>
using namespace std;

class Factorial{
    int n;
    public:
    void setFactorial(){
        cout<<"Enter a number : ";
        cin>>n;
    }

    int getFactorial(){
        int fact=1;
        for(int i=n;i>0;i--){
            fact = fact * i;
        }
        return fact;
    }
};

int main(){
    Factorial f;
    f.setFactorial();
    cout<<"Factorial is : "<<f.getFactorial()<<endl;
}