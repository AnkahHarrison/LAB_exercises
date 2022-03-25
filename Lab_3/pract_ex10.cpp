#include <iostream>
using namespace std;
int main(){
    int i;
    cout<<"Input any value: ", cin>>i;
    switch (i>0){
        case 1:
            cout<<"The number is positive";
            break;
        case 0:
            switch(i<0){
                case 1:
                cout<<"The number is negative";
                break;
                case 0: 
                cout<<"The number is zero";
                break;
            }
           
        }
}