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
    cout<<"Enter the values for the expression: ", cin>>x>>y;
    cout<<power(x,y);

}