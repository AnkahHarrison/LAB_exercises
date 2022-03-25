#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int n,n1,count=0;
    cout<<"\nPROGRAM TO COUNT A GIVEN NUMBER"<<endl;
    cout<<"================================"<<endl;
    cout<<"Enter a number: ", cin>>n1;
    n=n1;
    for(n; n!=0; count++){
        n=n/10;
    }
    cout<<"The number is "<<n1<<" and the count is "<<count<<endl;
}