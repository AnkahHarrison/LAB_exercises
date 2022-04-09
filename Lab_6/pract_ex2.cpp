#include <iostream>
using namespace std;

int firstNaturalN(int x){
    if(x>0){                                //base case
        return x+firstNaturalN(x-1);           //recursive call
    }else{
        return x;
    }
}

int main(){
    int x=20;
    cout<<"PROGRAM TO FIND THE SUM OF THE FIRST 20 NATURAL NUMBERS"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"The result is: "<<firstNaturalN(x)<<endl;
}

