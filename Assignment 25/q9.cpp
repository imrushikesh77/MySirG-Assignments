#include <iostream>
using namespace std;

class Circle{
    int a;
    public:
    void setParameter(){
        cout<<"Enter radius of circle : ";
        cin>>a;
    }

    void area(){
        cout<<"Area of circle is : "<<3.1415*a*a<<endl;
    }
};

int main(){
    Circle r;
    r.setParameter();
    r.area();
}