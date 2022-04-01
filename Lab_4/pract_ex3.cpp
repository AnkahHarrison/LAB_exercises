#include <bits/stdc++.h> 
using namespace std;

int main()
{
    int num, num1, rev_num = 0;
    cout<<"\nPROGRAM TO FIND THE REVERSE OF A GIVEN NUMBER WITH A DIFFERENCE OF TWO"<<endl;
    cout<<"========================================================================"<<endl;
    cout<<"Enter a number: ", cin>>num;
    num1=num;
    while (num > 0) {
        rev_num = (rev_num * 10) -2;
        num = num / 10;
    }
    cout << "Reverse of "<<num1<<" with a difference of 2 is " << rev_num<<endl;
    getchar();
    return 0;
}