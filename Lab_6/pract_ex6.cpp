#include <iostream>
#include <cmath>
using namespace std;

int reverseNum(int x){
    if(x){
       return ((x%10)*pow(10, (int)log10(x))+reverseNum(x/10));
    }else{
        return 0;
    }

}

int main(){
    int x;
    cout<<"Enter any number: ", cin>>x;
    cout<<reverseNum(x);
}