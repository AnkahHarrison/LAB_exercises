#include <iostream>
#include <cmath>
#include <math.h>
#include <iomanip>
using namespace std;;
float n,a,P,R,T,SI,S,V, CI;

int main(){
    cout<<"\nPROGRAM TO CALCULATE SIMPLE INTEREST & COMPOUND INTEREST"<<endl;
    cout<<"============================================================"<<endl;
    cout<<"Enter the principal amount(P): $";
    cin>>P;
    cout<<"Enter the rate per year(R): ";
    cin>>a;
    cout<<"Enter the period given, per year(T): ";
    cin>>T;
    R=a/100;
    SI=(P*R*T);
    V= pow((1+R), T);
    CI=P*V;
    cout<<"\nThe simple interest of the amount given is $"<<SI<<" and the compound interest of the amount is $"<<setprecision(1)<<CI<<endl;
}