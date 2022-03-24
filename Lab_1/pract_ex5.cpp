#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    float x,y;
    char entry, oper;
    e:
    cout<<"\nEnter values to be evaluated:\t";
    cin>>x>>oper>>y;
    switch(oper){
        case '+':
            cout<<"\nThe sum of the numbers is : "<<x+y<<endl;
            break;
        case '-':
            cout<<"\nThe difference of the numbers is: "<<x-y<<endl;
            break;
        case '/':
            cout<<"\nThe quotient of the numbers is: "<<x/y<<endl;
            break;
        case '*':
            cout<<"\nThe product of the numbers is: "<<x*y<<endl; 
            break;
        default:
            cout<<"\nEnter a valid syntax!"<<endl;
       }
}