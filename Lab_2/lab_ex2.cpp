#include <iostream>

using namespace std;

typedef long long int roll;
double s_1, s_2, s_3, s_4, S, P_S;
char name[];
roll ind;

int main () {
cout<<"\nPROGRAM TO CALCULATE THE PERCENTAGE SCORE OF TESTS"<<endl;
cout<<"=================================================="<<endl;
cout<<"Enter your name: ";
cin.get(name, 100);

cout<<"Enter your index number: ";
cin>>ind;

cout<<"Enter the score for COMM. SKILLS: ";
cin>>s_1;

cout<<"Enter the score for BASIC MECHANICS: ";
cin>>s_2;

cout<<"Enter the score for LINEAR ALGEBRA: ";
cin>>s_3;

cout<<"Enter the score for TECHNICAL DRAWING: ";
cin>>s_4;

S=(s_1+s_2+s_3+s_4);
P_S=(S/400)*100;

cout<<"\n================================================="<<endl;
cout<<"NAME: "<<name<<endl;
cout<<"INDEX NUMBER: "<<ind<<endl;
cout<<"PERCENTAGE SCORE: "<<P_S<<"%"<<endl;


}