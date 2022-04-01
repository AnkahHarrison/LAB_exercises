#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int num, num1, rev_num = 0;
    cout<<"\nPROGRAM TO FIND THE REVERSE OF A GIVEN NUMBER"<<endl;
    cout<<"============================================="<<endl;
    cout<<"Enter a number: ", cin>>num;
    num1=num;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    cout << "Reverse of "<<num1<<" is " << (rev_num)<<endl;
    getchar();
    return 0;
}