#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int a;
    cout<<"\nEnter any number: ", cin>>a;
    if(a%2==0){
        cout<<"The number is an even number!"<<endl;
    }else{
        cout<<"The number is an odd number!"<<endl;
    }   
}