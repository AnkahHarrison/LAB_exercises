#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cout<<"Enter a number: ", cin>>n;
    int number=n;
    for(int i=n-1; i>0&&i<n;i--){
        number=number*i;
    }
    cout<<number;
}