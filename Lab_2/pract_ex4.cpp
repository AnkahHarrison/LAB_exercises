#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int a,b,c,d;
    cout<<"Incrementation operators"<<endl;
    cout<<"Enter any value for prefix: ", cin>>a; 
    cout<<"Enter any value for postfix: ", cin>>b; 
    cout<<"\nThe prefix incrementation value(++a) is now: "<<++a<<" and the postfix incremenation value(b++) is now:  "<<b++;
    cout<<"\nDecrementation operators"<<endl;
    cout<<"Enter any value for prefix: ", cin>>c; 
    cout<<"Enter any value for postfix: ", cin>>d; 
    cout<<"\nThe prefix decrementation value(--c) is now: "<<--c<<" and the postfix decrementation value(d--) is now:  "<<d--<<endl;
}