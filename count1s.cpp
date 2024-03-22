#include <iostream>

int count1s(int arr[], int n)
{
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if(1>arr[mid]){
            start=mid+1;
        }
        else if(1<arr[mid]){
            end=mid-1;
        }
        else{
            if(mid==0||arr[mid]!=arr[mid-1])
                return n-mid;
            else
                end=mid-1;
        }
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
    std::cout<<count1s(arr,n);
}