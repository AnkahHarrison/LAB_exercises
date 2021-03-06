#include <iostream>
using namespace std;

int sumofDigits(int i){
    int remainder;   
    if((i/10)==0){                 //initialize variable for the remainder of the value, i
        return i;                 //base case: condition at which the sum of the digits of the value should be returned
    }

    if(i>0){                            //condition for recursive function
    remainder=i%10;
    i=i/10;
    }
    
    return  remainder+sumofDigits(i);   //recursive function call
}

int main(){
    int i;
    cout<<"Enter the value: ", cin>>i;
    cout<<sumofDigits(i);

    cout<<"\n";
    system("PAUSE /t 1");
}
