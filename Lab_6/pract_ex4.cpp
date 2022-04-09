#include <iostream>
using namespace std;

void swapVal(int &a, int &b){
    int temp = a;
    a=b;
    b=temp;
    }

    
int main(){
    int x=5, y=3;
    cout<<"Values before swap: "<<x<<" and "<<y<<endl;
    swapVal(x, y);
    cout<<"Values after swap: "<<x<<" and "<<y<<endl;
}
