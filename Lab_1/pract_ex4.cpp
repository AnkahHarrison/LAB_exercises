#define _USE_MATH_DEFINES //Mathematical definitions
#include <iostream>
#include <cmath>  //#include <math.h> C but may run into compi
using namespace std;

double r,a,c; //Declare variables

int main(){
    cout<<"\nPROGRAM TO CALCULATE THE AREA & CIRCUMFERENCE OF A CIRCLE"<<endl;
    cout<<"========================================================="<<endl;
    cout<<"Enter the value of raduis, r: ";
    cin>>r; //Input value of raduis

    a=M_PI*pow(r, 2); //Area of the circle [pi*r^2]
    c=2*M_PI*r; //Circumference of the circle [2*pi*r]

    cout<<"\nThe area of the circle is "<<a<<" squared centimetres and the circumference of the circle is "<<c<<"centimetres\n"; //output values of the equations
    return 0;
}