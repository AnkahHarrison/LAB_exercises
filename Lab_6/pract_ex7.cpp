#include <iostream>
using namespace std;

void maxNum(){
    double a, b;
    cout<<"Enter the values: ", cin>>a>>b;
    cout<<"The maximum number is: "<<max(a,b);
    cout<<endl;
}

void minNum(){
    double a, b;
    cout<<"Enter the values: ", cin>>a>>b;
    cout<<"The minimum number is: "<<min(a,b)<<endl;
}

int main(){
    int ch;
    do{
    cout<<"\n1. Maximum Number"<<endl;
    cout<<"2. Minimum Number"<<endl;
    cout<<"Enter the operation: ", cin>>ch;
    switch(ch){
        case 1:
            maxNum();
            system("PAUSE /t 1");
            system("cls");
            break;
        case 2:
            minNum();
            system("PAUSE /t 1");
            system("cls");
            break;
    }
    }while(ch>0&&ch<3);
    
    
    //minNum();
}