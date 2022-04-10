#include <iostream>
#include <cmath>
#include <string>
using namespace std;

void isPrime(){
    int a;
    bool prime=true;
    cout<<"Enter any number: ", cin>>a;
    for(int i=2; i<=(a/2); i++){
        if(a%i==0){
            cout<<"\nThe number is not prime"<<endl;
            prime=false;
        } 
    }
       if(prime){
            cout<<"\nThe number is prime"<<endl;
        }

}

int armstrong(int a){
    if(a>0)
    return (pow(a%10, 3)+armstrong(a/10));
}

void perfectNumber(int a);

int main(){
 int a,ch;

    do{
        cout<<"\nPROGRAM TO CHECK IF A NUMBER IS PRIME, ARMSTRONG OR PERFECT"<<endl;
        cout<<"1. Check if it's prime"<<endl;
        cout<<"2. Check if it's armstrong"<<endl;
        cout<<"3. Check if it's perfect"<<endl;
        cout<<"Enter the operation: ", cin>>ch;

        switch(ch){
            case 1:
                isPrime();
                break;
            case 2:
                cout<<"Enter any number: ", cin>>a;
                if(armstrong(a)==a){
                cout<<"The value is an armstrong value!\n";
                }else{
                    cout<<"The value is not an armstrong!\n";
                }
                break;
            /*case 3: 
                perfectNumber(a);
                break;
            */

        }

    }while(ch>0&&ch<4);
}


