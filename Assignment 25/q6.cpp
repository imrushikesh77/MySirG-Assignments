#include <iostream>
using namespace std;

class Square{
    int n;
    public:
    void setNumber(){
        cout<<"Enter a number : ";
        cin>>n;
    }

    getSquare(){
        int count=0;
        count++;
        cout<<"Square is "<<n*n<<" and function runs "<<count<<" times"<<endl;
    }
};

int main(){
    Square s;
    s.setNumber();
    s.getSquare();

}