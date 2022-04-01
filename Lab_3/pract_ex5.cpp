#include <iostream>
using namespace std;
 
int main()
{
    int n,number;
    cout<<"Enter a number: ", cin>>n;
    number=(n == 1 || n == 0) ? 1 : n*(n - 1);
    cout << "Factorial of " << n<< " is "<<number;
    return 0;
}