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
    cout<<"\nEnter the value: ", cin>>a;
    return evenOdd(a);
}