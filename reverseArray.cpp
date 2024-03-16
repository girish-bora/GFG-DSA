#include <iostream>

void reverseArray(int arr[], int n)
{
    for(int i=0;i<n;i++){
        std::cout<<arr[n-i-1]<<" ";
    }
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    reverseArray(arr,n);
}