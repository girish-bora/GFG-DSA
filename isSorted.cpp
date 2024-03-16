#include <iostream>

bool isSorted(int arr[], int n)
{
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
            return 0;
    }
    return 1;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<isSorted(arr,n);
}