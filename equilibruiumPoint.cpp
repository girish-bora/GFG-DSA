#include <iostream>

bool isEquilibriumPoint(int arr[], int n)
{
    int lsum=0,rsum=0;
    for(int i=0;i<n;i++){
        rsum+=arr[i];
    }
    for(int j=0;j<n;j++){
        rsum-=arr[j];
        if(lsum==rsum)
            return 1;
        lsum+=arr[j];
    }
    return 0;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<isEquilibriumPoint(arr,n);
}