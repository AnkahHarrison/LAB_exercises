#include <iostream>
#include <windows.h>
using namespace std;
void rightHalfTriangle(){
    for(int i=1; i<=5;i++){ 
        for(int j=1;j<=i;j++){ 
        cout<<"*"; 
        } 
        cout<<"\n"; 
    }
}

void invertedRightHalfTriangle()
{
    for (int i = 5; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

void leftHalfTriangle()
{
       for(int i=5; i>0; i--)
    {
      for(int j=0; j<=5; j++)
      {
        if (j>=i)
        {
          cout<<"*";
        }
        else
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }
}

void fullTriangle(){
    int n, k = 2 * n - 2;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++)
            cout << " ";
            k -=1;
        for (int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int choice;
    do{
    cout<<"\nTRIANGLE SCHEME"<<endl;
    cout<<"==============="<<endl;
    cout<<"1. Right Half triangle"<<endl;
    cout<<"2. Inverted Right Half triangle"<<endl;
    cout<<"3. Left Half triangle"<<endl;
    cout<<"4. Full Triangle"<<endl;
    cout<<"\nMake a choice: ", cin>>choice;
    cout<<"\n";
    switch(choice){
        case 1:
            rightHalfTriangle();
            break;
        case 2:
            invertedRightHalfTriangle();
            break;
        case 3:
            leftHalfTriangle();
            break;
        case 4:
            fullTriangle();
            break;
        default:
            cout<<"Invalid choice";
            system("cls");
    }
    }while(choice>=1 && choice<5);
}