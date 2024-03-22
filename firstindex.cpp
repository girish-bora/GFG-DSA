#include <iostream>

int firstOccurence(int arr[], int n,int k)
{
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(k>arr[mid]){
            start=mid+1;
        }
        else if(k<arr[mid]){
            end=mid-1;
        }
        else{
            if(mid==0||arr[mid]!=arr[mid-1])
                return mid;
            else
                end=mid-1;
        }
    }
    return -1;
}

int main(){
    std::cout<<"Enter: ";
    int n,k;
    std::cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<firstOccurence(arr,n,k);
}