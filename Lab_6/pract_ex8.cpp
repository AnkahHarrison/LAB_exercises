#include <iostream>
using namespace std;

int evenOdd(int a){
    if(a%2==0)
    cout<<"The number is even"<<endl;
    else
    cout<<"The number is odd"<<endl;
    return 0;
}

int main(){
    float a;
    cout<<"PROGRAM TO DISPLAY IF A NUMBER IS EVEN OR ODD"<<endl;
    cout<<"---------------------------------------------"<<endl;
    cout<<"Enter the value: ", cin>>a;
    return evenOdd(a);
    system("PAUSE /t 1");
}