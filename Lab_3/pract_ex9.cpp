#include <iostream>
using namespace std;
int main(){
int d, m, y;
bool date;
cout<<"Enter the date(Day/Month/Year): ";
cin>>d>>m>>y; 
cout<<d<<"/"<<m<<"/"<<y<<endl;
if((d<=30 && d>0)&&(m==4 || m==9||m==6||m==11)){
    cout<<"It is valid";
}


}
