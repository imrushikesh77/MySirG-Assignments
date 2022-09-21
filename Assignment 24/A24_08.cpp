#include <iostream>
#include <math.h>
using namespace std;

float area(float r){
    return 3.1415*r*r;
}

float area (float a, float b){
    return a*b;
}

float area(float x, float y, float z){
    float s = (float)(x+y+z)/2;
    float a = sqrt((s-x)*(s-y)*(s-z)*s);
    return a;
}

int main(){
    float r;
    cout<<"Enter radius of circle : ";
    cin>>r;
    cout<<"Area of circle is : "<<area(r)<<"units"<<endl;
    float a,b;
    cout<<"Enter lenght and breadth of reactangle : ";
    cin>>a>>b;
    cout<<"Area of rectangle is : "<<area(a,b)<<"units"<<endl;
    float x,y,z;
    cout<<"Enter three sides of triangle : ";
    cin>>x>>y>>z;
    cout<<"Area of triangle is : "<<area(x,y,z)<<"units"<<endl;

}