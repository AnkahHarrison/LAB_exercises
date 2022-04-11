#include <iostream>
#define MAX_SIZE 100

int main(){
    int arr[MAX_SIZE];
    int i, size, location;
    std::cout<<"Enter size of the array : ";
    std::cin>>size;
    std::cout<<"Enter elements in array : ";
    for(i=0; i<size; i++)
    {
        std::cin>>arr[i];
    }

    
    std::cout<<"Enter the element position to delete : ", std::cin>>location;


    if(location<0 || location> size)
    {
        std::cout<<"Invalid position in the Array!" ;
    }
    else
    {
        
        for(i=location-1; i<size-1; i++)
        {
            arr[i] = arr[i + 1];
        }

        
        size--;

        
        std::cout<<"\nElements of array after delete are : ";
        for(i=0; i<size; i++)
        {
            std::cout<<arr[i];
        }
    }

    return 0;
}