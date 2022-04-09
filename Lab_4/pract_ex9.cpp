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
void fullTriangleNumbers(){
    int k, count=0, count1;
    for(int i = 1; i <= 6; ++i)
    {
        for(int j = 1; j <= 6-i; ++j)
        {
            cout << "  ";
            ++count;
        }
        while(k!=(2*i-1))
        {
            if (count<6)
            {
                cout << i+k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;

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
    cout<<"5. Full triangle with number pattern"<<endl;
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
        case 5:
            fullTriangleNumbers();
            break;
        default:
            cout<<"Invalid choice";
            system("cls");
    }
    }while(choice>=1 && choice<5);
}

