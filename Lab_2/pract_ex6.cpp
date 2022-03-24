#include <iostream>
using namespace std;

int main(){
    int a, b, c, max_int;
    cout<<"Enter the first value: ";
    cin>>a;
    cout<<"Enter the second value: ";
    cin>>b;
    cout<<"Enter the third value: ";
    cin>>c;
    max_int= (a>b && a>c)?a:(b>c?b:c);
    cout<<"\nThe maximum number of the two inputs is: "<<max_int;
}