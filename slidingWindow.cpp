#include <iostream>

int slidingWindow(int arr[], int n,int k)
{
    int res=0,curr=0;
    for(int i=0;i<k;i++)
        curr+=arr[i];
    res=curr;
    for(int j=k;j<n;j++){
        curr=curr-arr[j-k]+arr[j];
        res=std::max(curr,res);
    }
    return res;
}

int main(){
    std::cout<<"Enter: ";
    int n,k;
    std::cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<slidingWindow(arr,n,k);
}