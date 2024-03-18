#include <iostream>

void leaderInArray(int arr[], int n)
{
    int ldr = arr[n-1];
    std::cout<<ldr<<" ";
    for(int i=n-2;i>=0;i--){
        if(arr[i]>ldr){
            std::cout<<arr[i]<<" ";
            ldr=arr[i];
        }
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
    leaderInArray(arr,n);
}