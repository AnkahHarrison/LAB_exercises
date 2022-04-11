#include <iostream>
using namespace std;

int firstNaturalN(int x){
    if(x>0){                                //base case
        return x+firstNaturalN(x-1);       //recursive call: x-1 signifies a decrement of the order to the base case, such that x<0
    }else{
        return x;                          //return value of x when is not greater than 0  
    }
}

int main(){
    int x=20;                               //Assign value to a variable x 
    cout<<"PROGRAM TO FIND THE SUM OF THE FIRST 20 NATURAL NUMBERS"<<endl;
    cout<<"-------------------------------------------------------"<<endl;
    cout<<"The result is: "<<firstNaturalN(x)<<endl;    //Call function by value of x
    cout<<"\n";
    system("PAUSE /t 1");
}

