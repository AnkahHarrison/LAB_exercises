#include <iostream>
#include <cmath>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

double u,a,t,b,c,p;

int main(){
    cout<<" \n\t\tu \ta \tt \tb \tc \tp"<<endl; //display column with assigned variables
    cout<<"Enter values: \t", cin>> u," \t",cin>>a," \t",cin>>t," \t",cin>>b," \t",cin>>c," \t",cin>>p; //take input from user per column
    cout<<"\nSolving for the expression: V=u+at: "<<u+(a*t)<<endl; //calculate using math formula and display results
    cout<<"Solving for the expression: S=ut+1/2at^2: "<<(u*t)+((a*t*t)/2)<<endl; //calculate using math formula and display results
    cout<<"Solving for the expression: T=2a+sqrt(b+9c): "<<setprecision(3)<<(2*a)+sqrt(b+(9*c))<<endl; //calculate using math formula and display results
    cout<<"Solving for the expression: H=sqrt(b^2+p^2): "<<setprecision(3)<<sqrt((b*b)+(p*p))<<endl; //calculate using math formula and display results
}
