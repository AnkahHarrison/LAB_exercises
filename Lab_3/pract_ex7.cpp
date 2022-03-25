#include <iostream>
using namespace std;

int main(){
    e:
int day;
cout<<"What day would you like to know (1,2,3,4..)?: ", cin>>day;
if(day>7 || day<0){
            system("cls");
            goto e;
        }

switch(day){
    case 1:
        cout<<"Sunday";
        break;
    case 2:
        cout<<"Monday";
        break;
    case 3:
        cout<<"Tuesday";
        break;
    case 4:
        cout<<"Wednesday";
        break;
    case 5:
        cout<<"Thursday";
        break;
    case 6:
        cout<<"Friday";
        break;
    case 7:
        cout<<"Saturday";
        break;

}
}
