#include <iostream>

int trappingWater(int arr[], int n)
{
    int water=0;
    int lmax[n],rmax[n];
    lmax[0]=arr[0];
    rmax[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        lmax[i]=std::max(arr[i],lmax[i-1]);
    }
    for(int j=n-2;j>=0;j--){
        rmax[j]=std::max(arr[j],rmax[j+1]);
    }
    for(int k=0;k<n;k++){
        water+=std::min(lmax[k],rmax[k])-arr[k];
    }
    return water;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<trappingWater(arr,n);
}