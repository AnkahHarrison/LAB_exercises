#include <iostream>
using namespace std;

int main(){
    long double fn=0, sn=1, i, n, sum;
    cout<<"Enter the number of terms: ", cin>>n;
    cout<<"The series is: "<<endl;
    for(i=0; i<=n; i++){
        sum=i;
        if(i<=1){
            sum=i;
        }else{
            sum=fn+sn;
            fn=sn;
            sn=sum;
        }
        cout<<sum<<endl;
    }
   

}