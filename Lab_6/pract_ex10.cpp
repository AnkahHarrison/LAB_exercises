#include <iostream>
using namespace std;

int power(int x, int y){
    if(y==0){
          return 1;
    }else{
        return x*power(x, y-1);
      
    }
}

int main(){
    int x,y;
    cout<<"PROGRAM TO FIND THE POWER OF A NUMBERS"<<endl;
    cout<<"--------------------------------------"<<endl;
    cout<<"Enter the values for the expression: ", cin>>x>>y;
    cout<<power(x,y);
    cout<<endl;
    system("PAUSE /t 1");
}