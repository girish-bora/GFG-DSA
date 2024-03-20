#include <iostream>

int maxNormalSum(int arr[], int n){
    int maxsum=arr[0];
    int maxending=arr[0];
    for(int i=1;i<n;i++){
        maxending=std::max(maxending,maxending+arr[i]);
        maxsum=std::max(maxsum,maxending);
    }
    return maxsum;
}

int maxCircularSum(int arr[], int n)
{
    int normalsum=maxNormalSum(arr,n);
    if(normalsum<0){
        return normalsum;
    }
    int maxsum=0;
    for(int i=0;i<n;i++){
        maxsum+=arr[i];
        arr[i]=-arr[i];
    }
    int maxCircularSum=(maxsum+maxNormalSum(arr,n));
    return maxCircularSum;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<maxCircularSum(arr,n);
}