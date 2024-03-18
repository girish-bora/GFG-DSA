#include <iostream>

int maxDifferenceOrder(int arr[], int n)
{
    int min=arr[0];
    int dif=arr[1]-arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]-min>dif){
            dif=arr[i]-arr[0];
        }
        if(arr[i]<min)
            min=arr[i];
    }
    return dif;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<maxDifferenceOrder(arr,n);
}