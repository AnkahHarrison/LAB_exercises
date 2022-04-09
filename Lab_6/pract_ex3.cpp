#include <iostream>
using namespace std;

int fibonacci(int x){
    if(x==1||x==2){
        return 1;
    }
    return (fibonacci(x-1)+fibonacci(x-2));
}

int main(){
    int x;
    cout<<"PROGRAM TO PRINT THE FIBONACCI SERIES TO THE Nth TERM"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    cout<<"Enter the number terms: ", cin>>x;
    for(int i=1; i<=x; i++){
    cout<<fibonacci(i)<<", ";
    }
}