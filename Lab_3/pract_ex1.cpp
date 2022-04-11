#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int i, a;
    bool prime=true;
    cout<<"\nEnter any number: ", cin>>a;
    for(i=2; i<=sqrt(a); i++ ){
        if(a%i==0){
            cout<<"Number is not a prime number!"<<endl;
            prime=false;
            break;
        }
    }
    if(prime){
        cout<<"Number is prime";
    }
}