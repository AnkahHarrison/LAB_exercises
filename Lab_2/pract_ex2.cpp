#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::swap;

int main(){
    int a, b;
    cout<<"\nEnter the first value: ", cin>>a;
    cout<<"Enter the second value: ", cin>>b;
    cout<<"\nThese are your values:  "<<a<<" and "<<b<<endl;
    swap(a,b);
    cout<<"\nThese are your swapped values: "<<a<<" and "<<b<<endl;
}