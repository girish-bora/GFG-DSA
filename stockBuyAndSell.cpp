#include <iostream>

int stockBuyAndSell(int arr[], int n)
{
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
            profit+=arr[i]-arr[i-1];
    }
    return profit;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<stockBuyAndSell(arr,n);
}