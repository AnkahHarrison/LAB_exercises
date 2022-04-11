#include <iostream>
using namespace std;

void swapVal(int &a, int &b){               //Function for swapping two numbers
    int temp = a;                           //Assign first value into a temporary variable
    a=b;                                    //Replace first value with second value
    b=temp;                                 //Replace second value with the first value from the temporary variable 
    }

    
int main(){
    int x=5, y=3;                           //Declare and Assign values to the two variables
    cout<<"Values before swap: "<<x<<" and "<<y<<endl;          //Display values before getting swapped 
    swapVal(x, y);                          //Call to function by values
    cout<<"Values after swap: "<<x<<" and "<<y<<endl;           //Display swapped values

    cout<<"\n";
    system("PAUSE /t 1");
}
