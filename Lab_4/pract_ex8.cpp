#include <iostream>
using namespace std;

int main(){
    float a,b, gcd, lcm;
    cout<<"\nEnter two numbers: ",cin>>a>>b;
    while(a!=b){
        if(a>b){
            a=a-b;
            gcd=a;
        }else{
            b=b-a;
            gcd=b;
        }
    }
    lcm=(a*b)/gcd;
    cout<<"The GCD is "<<a<<" and the LCM is "<<lcm;

}