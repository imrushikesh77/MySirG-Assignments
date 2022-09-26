#include <iostream>
using namespace std;

class Rectangle{
    int length;
    int breadth;
    int radius;
    int side;
    public:
    void setRectangle(){
        cout<<"Enter length and breadth of rectangle : ";
        cin>>length>>breadth;
    }

    void setSquare(){
        cout<<"Enter side of square : ";
        cin>>side;
    }

    void setCircle(){
        cout<<"Enter radius of circle : ";
        cin>>radius;
    }

    void areaRectangle(){
        cout<<"Area of rectangle is : "<<length*breadth<<endl;
    }

    void areaCircle(){
        cout<<"Area of circle is : "<<3.1415*radius*radius<<endl;
    }

    void areaSquare(){
        cout<<"Area of square is : "<<side*side<<endl;
    }
};

int main(){
    Rectangle r;
    r.setSquare();
    r.setRectangle();
    r.setCircle();
    r.areaSquare();
    r.areaRectangle();
    r.areaCircle();
}