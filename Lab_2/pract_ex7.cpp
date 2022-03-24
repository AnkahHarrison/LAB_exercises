#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float x1,x2,a,b,c;
    cout<<"\nEnter the value of the co-efficient of 'x^2': ";
    cin>>a;
    cout<<"Enter the value of the co-efficient of 'x': ";
    cin>>b;
    cout<<"Enter the value of 'c': ";
    cin>>c;
    x1= (-b+sqrt(pow(b,2)-4*(a*c)))/(2*a);
    x2= (-b-sqrt(pow(b,2)-4*(a*c)))/(2*a);
    cout<<"\nThe values of the roots are x="<<x1<<" and "<<"x="<<x2<<endl;

}