#include <iostream>
using namespace std;

int main(){
    int marks;
    e:
    do{
    cout<<"Enter the marks: ", cin>>marks;
    if(marks<=100 && marks>=90){
            if(marks==100){
                cout<<"Perfect Score!";
            } 
            cout<<'A';
        }else if(marks>=80&&marks<90){
            cout<<'B';
        }else if(marks>=70&&marks<80){
            cout<<'C';
        }else if(marks>=60&&marks<70){
            cout<<'D';
        }
        break;
    }
    while(marks>=0&&marks<=100);
    if(!(marks>=0&&marks<=100)){
            cout<<"Invalid Score"<<endl;
            system("PAUSE /t 1");
            system("cls");
            goto e;

        }
}


