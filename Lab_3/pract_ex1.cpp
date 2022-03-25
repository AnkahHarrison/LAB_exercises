#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int i, a;
    cout<<"\nEnter any number: ", cin>>a;
    for(i=2; i<=a; i++ ){
        if(a%i==0){
            cout<<"Number is not a prime number!"<<endl;
        }
         break;
    }
    if(a%i>0 || a%i<0){
            cout<<"Number is prime!"<<endl;
        }
}