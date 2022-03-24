#include <iostream>
#include <iomanip>

using namespace std;

typedef long long int roll;
double s_1, s_2, s_3, s_4, s_5, S, P_S, C;
char name[30];
roll ind;

int main () {
cout<<"\nPROGRAM TO DISPLAY THE TEST RESULTS OF A USER"<<endl;
cout<<"================================================="<<endl;
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

cout<<"Enter the score for FRENCH: ";
cin>>s_5;

S=s_1+s_2+s_3+s_4+s_5;
P_S=(S/5);

cout<<"\n================================================="<<endl;
cout<<"NAME: "<<name<<endl;
cout<<"INDEX NUMBER: "<<ind<<endl;
cout<<"TOTAL MARKS SCORED: "<<S<<endl;
cout<<"PERCENTAGE SCORE: "<<setprecision(4)<<P_S<<"%"<<endl;
cout<<"CLASS: ";
if(P_S<=100 && P_S>=80){
    cout<<"FIRST CLASS\n";
}else if(P_S>=70){
    cout<<"SECOND CLASS UPPER\n";
}else if(P_S>=50){
    cout<<"SECOND CLASS LOWER\n";
}else{
    cout<<"FAIL\n";
}
}