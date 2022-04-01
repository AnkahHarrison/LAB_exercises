#include <iostream>
using namespace std;
int main()
{
 int n1, n2, r, s=0; //declaration of variables
 cout << "\nPROGRAM TO FIND THE SUM OF DIGITS IN A GIVEN NUMBERS\n";
 cout << "=======================================================\n";
 cout << "Input a number: ";
 cin >> n1; //user inputs number1
 n2 = n1;
 while (n1 > 0) 
 {
 r = n1 % 10;
 n1 = n1 / 10;
 s = s + r; //calculates sum
 }
cout << "The sum of digits of " << n2 << " is: " << s <<endl; //displays sum of digits
return 0;//end program
}

