
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
    int a, b, c, max_int, min_int, lnum, snum;
    cout<<"Enter first value: ", cin>>a;
    cout<<"Enter second value: ", cin>>b;
    cout<<"Enter third value: ", cin>>c;
    max_int=(a>b&&a>c)?a:(b>c?b:c);
    min_int=(a<b&&a<c)?a:(b<c?b:c);
    if(max_int%2==0){
        cout<<max_int<<" is the largest number and is an even number"<<endl;
    }else{
        cout<<max_int<<" is the largest number and is not an even number"<<endl;   
    }
    
    if(min_int%2==0){
         cout<<min_int<<" is the smallest number and is an even number"<<endl;
    }else{
         cout<<min_int<<" is the smallest number and is not an even number"<<endl;
    }

}