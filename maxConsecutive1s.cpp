#include <iostream>

int maxConsecutive1s(int arr[], int n)
{
    int maxctr=0,ctr=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            ctr=0;
        }
        else{
            ctr++;
            maxctr=std::max(maxctr,ctr);
        }
    }
    return maxctr;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<maxConsecutive1s(arr,n);
}