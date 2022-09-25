#include <iostream>
using namespace std;

class Complex{
    int real;
    int img;
    public:
    void setComplex(){
        cout<<"Enter real and imaginary parts of complex number : ";
        cin>>real>>img;
    }

    void getComplex(){
        cout<<"Your complex number is : ";
        cout<<real<<" + "<<img<<"i"<<endl;
    }
};

int main(){
    Complex c1, c2;
    c1.setComplex();
    c2.setComplex();
    c1.getComplex();
    c2.getComplex();
}