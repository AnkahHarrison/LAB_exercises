#include <iostream>
#include <windows.h>
#define NWLN "\n"
using std::cout;
using std::cin;
using std::endl;

int main(){
    int marks;
    e:
    cout<<"Enter the marks: ", cin>>marks;
    if(marks>100){
        cout<<"Invalid marks";
        system("cls");
        goto e;
    }
    if(marks<=100 && marks>=80){
        if(marks>=90){
        cout<<"You had grade A++";
        }else{
        cout<<"You had grade A";
        }
    }else if(marks<80 && marks>=60){
        if(marks>=70){
            cout<<"You had grade B++";
        }else{
        cout<<"You had grade B";
        }
    }else if(marks>=50 && marks<60){
        cout<<"You had grade C";
    }else{
        cout<<"You had grade F"<<endl;
    }
}