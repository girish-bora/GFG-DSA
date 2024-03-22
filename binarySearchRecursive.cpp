#include <iostream>

int binarySearch(int arr[], int start,int end, int k)
{
    int mid=(start+end)/2;
    if(start>end){
        return -1;
    }
    if(arr[mid]==k){
        return mid;
    }
    else if(arr[mid]>k){
        return binarySearch(arr,start,mid-1,k);
    }
    else{
        return binarySearch(arr,mid+1,end,k);
    }
}

int main(){
    std::cout<<"Enter: ";
    int n,k;
    std::cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<binarySearch(arr,0,n,k);
}