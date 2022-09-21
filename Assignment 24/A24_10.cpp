#include <iostream>
using namespace std;

int add(int a,int b){
    return a+b;
}

float add(float x, float y){
    return x+y;
}

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Sum is : "<<add(a,b)<<endl;
    float x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    cout<<"Sum is : "<<add(x,y)<<endl;

}