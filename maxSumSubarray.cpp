#include <iostream>

int maxSumSubarray(int arr[], int n)
{
    int maxsum=arr[0];
    int maxending=arr[0];
    for(int i=1;i<n;i++){
        maxending=std::max(maxending+arr[i],arr[i]);
        maxsum=std::max(maxending,maxsum);
    }
    return maxsum;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<maxSumSubarray(arr,n);
}