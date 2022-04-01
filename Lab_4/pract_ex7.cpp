#include<iostream>
using namespace std;

int firstDigit(int n){
        while(n>=10)
            n=n/10;
        return n;
    }
    
    int lastDigit(int n){
        return(n%10);
    }

int main(){
        int n;
        cout<<"Enter a number: ", cin>>n;
        if(n<=999){
            cout<<"Enter a four digit number"<<endl;
        }
        cout<<"\nThe result is: "<<firstDigit(n)+lastDigit(n);
}