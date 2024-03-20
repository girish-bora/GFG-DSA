#include <iostream>

int prefixSum(int arr[], int k,int l)
{
    if(k==0)
        return arr[l];
    else
        return arr[l]-arr[k-1];
}

int main(){
    std::cout<<"Enter: ";
    int n,k,l;
    std::cin>>n>>k>>l;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    int presum[n];
    presum[0]=arr[0];
    for(int i=1;i<n;i++){
        presum[i]=arr[i]+presum[i-1];
    }
    std::cout<<prefixSum(presum,k,l);
}