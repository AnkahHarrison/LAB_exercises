#include <iostream>
using namespace std;

int fibonacci(int x){
    if(x==1||x==2){                 //base case for the recursive function  for the first and second term
        return 1;                   //Value of the first and second term
    }
    return (fibonacci(x-1)+fibonacci(x-2));         //Recursive function for the fibonacci series
}

int main(){
    int x;                      //Declare variable
    cout<<"PROGRAM TO PRINT THE FIBONACCI SERIES TO THE Nth TERM"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Enter the number terms: ", cin>>x;       //Allow input into the variable
    for(int i=1; i<=x; i++){                        //For loop for the iteration of the value of i=1 to the value of x
    cout<<fibonacci(i)<<", ";                       //Call to fibonacci(x) such that i=x
    }

    cout<<"\n";
    system("PAUSE /t 1");
}