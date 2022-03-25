#include <iostream>
using namespace std;
int main(){
   char ch;
   int c;
   cout<<"\nEnter a character: ", cin>>ch;
   c=ch;
   if(c>=65 && c<=90){
       cout<<"You entered a capital case letter"<<endl;
   }else if(c>=97 && c<=122){
       cout<<"You entered a small case letter"<<endl;
   }else if(c>=48 && c<=57){
       cout<<"You entered a digit"<<endl;
   }else if(c>=0 && c<=47|| c>=58 && c<65 || c>=91 && c<=96 || c>=123 && c<=127){
       cout<<"You entered a special character"<<endl;
   }
}