#include <iostream>
using namespace std;
int main(){
    int a,b,max_int;
    cout<<"Enter the first value: ", cin>>a;
    cout<<"Enter the second value: ", cin>>b;
    if(a>b){
        max_int=a;
        cout<<"\nThe maximum number is: "<<max_int;
    }else{
        cout<<"\nThe maximum number is: "<<b;
    }
    
}