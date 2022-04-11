#include <iostream>
using namespace std;


int factorial(int n){           //Recursive Function for Factorials
    if(n>1){                    //Check condition for values of n greater than 1
    return n*factorial(n-1);   
    }

    return 1;                   //Returns 1 because the factorial of 1 is 1;
}

int main(){
    int n;
    cout<<"\nPROGRAM TO FIND THE FACTORIAL OF A NUMBER"<<endl;
    cout<<"-------------------------------------------"<<endl;
    for(int i=1; i==1;i++){
        for(int j=i; j<=42; j++){
            cout<<"-";
        }
        cout<<endl;
    }

    
    cout<<"Enter the value to find factorial: ", cin>>n;
    cout<<factorial(n);
    cout<<"\n";
    system("PAUSE /t 1");
}