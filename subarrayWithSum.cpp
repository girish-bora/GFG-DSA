#include <iostream>
#include <string>


std::string subarrayWithSum(int arr[], int n,int sum)
{
    int curr=0,k=0;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        while(curr>sum){
            curr-=arr[k];
            k++;
        }
        if(curr==sum)
            return "Yes";
    }
    return "No";
}

int main(){
    std::cout<<"Enter: ";
    int n,k;
    std::cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<subarrayWithSum(arr,n,k);
}