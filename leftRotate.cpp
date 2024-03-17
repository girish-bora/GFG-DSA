#include <iostream>

void leftRotate(int arr[], int n)
{
    std::cout<<"Original: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
    int temp=arr[0];
    for(int i=0;i<n;i++){
        if(i==n-1)
            arr[i]=temp;
        else
            arr[i]=arr[i+1];
    }
    std::cout<<"\nNew: "<<std::endl;
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
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
    leftRotate(arr,n);
}