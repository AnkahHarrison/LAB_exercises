#include <iostream>
using namespace std;

void Add(double a, double b){               //Function for Addition of two numbers
        cout<<"The result is: "<<a+b<<endl; 
    }
void Divide(double a, double b){        //Function for Quotient of two numbers
        cout<<"The result is: "<<a/b<<endl;
    }

void Subtract(double a, double b){      //Function for Difference of two numbers
    cout<<"The result is: "<<a-b<<endl;
}
 
void Multiply(double a, double b){      //Function for Multiplication of two numbers
    cout<<"The result is: "<<a*b<<endl;
}

int main(){
    double a,b;                         //Declare variables for two numbers
    char oper;                          //Declare variable for operands


    cout<<"\nPROGRAM TO PERFORM BASIC ARITHMETRIC OPERATIONS"<<endl;
    cout<<"-------------------------------------------------"<<endl;
    cout<<"Enter the expression: ", cin>>a>>oper>>b;            //Allow input into variables
    switch(oper){                                               //Switch case for operands
        case '+':                                               //When the character '+' is used
            Add(a,b);                                           //Call Add(a,b) function
            break;
        case '-':                                               //When the character '+' is used
           Subtract(a,b);                                       //Call Subtract(a,b) function
            break;
        case '*':                                               //When the character '+' is used
            Multiply(a,b);                                      //Call Multiply(a,b) function
            break;
        case '/':                                               //When the character '+' is used
           Divide(a,b);                                         //Call Divide(a,b) function
            break;
        default:
            cout<<"Invalid Operation"<<endl;
    }
    cout<<"\n";
    system("PAUSE /t 1");
}


