#include <iostream>
using namespace std;

int max(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

double max(double x, double y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

int main(){
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    cout<<"Max number among "<<a<<" and "<<b<<" is "<<max(a,b)<<endl;
    double x,y;
    cout<<"Enter two numbers : ";
    cin>>x>>y;
    cout<<"Max number among "<<x<<" and "<<y<<" is "<<max(x,y)<<endl;

}