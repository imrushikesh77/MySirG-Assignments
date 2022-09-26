#include <iostream>
using namespace std;

class Rectangle{
    int a;
    int b;
    public:
    void setParameter(){
        cout<<"Enter length and breadth of rectangle : ";
        cin>>a>>b;
    }

    void area(){
        cout<<"Area of rectangle is : "<<a*b<<endl;
    }
};

int main(){
    Rectangle r;
    r.setParameter();
    r.area();
}