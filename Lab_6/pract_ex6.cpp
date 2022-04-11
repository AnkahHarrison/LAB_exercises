#include <iostream>
#include <cmath>
using namespace std;

int reverseNum(int x){
    if(x){
       return ((x%10)*pow(10, (int)log10(x))+reverseNum(x/10));         //NB: You can use a while loop to fidn the reverse, I used a recursive function just to make things more interesting.
    }else{
        return 0;
    }

}

int main(){
    int x;                                          //Declare variable      
    cout<<"Enter any number: ", cin>>x;            //Allow values into variables
    cout<<reverseNum(x);                           //Call to function

cout<<"\n";
    system("PAUSE /t 1");
}