#include<iostream>
using namespace std;
int main()
{
    string name;
    int n,k,index;
    cout<<"\nEnter size of array: ", cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be searched"<<endl;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            index=i;
            break;
        }
    }
    if(index!=-1)
    cout<<"The element "<<k<<" is present at index No. "<<index;
    else
    cout<<"The element "<<k<<" is not there in the array\n";
    return 0;
}