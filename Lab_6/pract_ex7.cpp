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
    cout<<"\nPROGRAM TO DISPLAY MAXIMUM & MINIMUM VALUES"<<endl;
    cout<<"--------------------------------------------"<<endl;
    cout<<"1. Check the maximum number!"<<endl;
    cout<<"2. Check the minimum number!"<<endl;
    cout<<"Make a choice (1 or 2) or 'q' to exit: ", cin>>ch;
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
        case 'q':
            break;
    }
    }while(ch>0&&ch<3);
    
  
}