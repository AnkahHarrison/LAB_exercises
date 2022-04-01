#include <iostream>
using namespace std;
int main()
{
 int n,n1,r,sum=0;
 cout<<"Enter the Number ", cin>>n;
n1=n;
while(n>0)
{
r=n%10;
sum=(sum*10)+r;
n=n/10;
}
if(n1==sum)
cout<<"Number is Palindrome.\n";
else
cout<<"Number is not Palindrome.";
 return 0;
}