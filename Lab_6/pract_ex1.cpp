#include <iostream>
using namespace std;

void Add(double a, double b){
        cout<<"The result is: "<<a+b<<endl;
    }
void Divide(double a, double b){
        cout<<"The result is: "<<a/b<<endl;
    }

void Subtract(double a, double b){
    cout<<"The result is: "<<a-b<<endl;
}
 
void Multiply(double a, double b){
    cout<<"The result is: "<<a*b<<endl;
}

int main(){
    double a,b;
    char oper;


    cout<<"\nPROGRAM TO PERFORM BASIC ARITHMETRIC OPERATIONS"<<endl;
    cout<<"Enter the expression: ", cin>>a>>oper>>b;
    switch(oper){
        case '+': 
            Add(a,b);
            break;
        case '-':
           Subtract(a,b);
            break;
        case '*':
            Multiply(a,b);
            break;
        case '/':
           Divide(a,b);
            break;
        default:
            cout<<"Invalid Operation"<<endl;
    }
}


