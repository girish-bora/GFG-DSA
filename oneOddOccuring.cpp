#include <iostream>
#include <math.h>

int oneOddOccuring(int arr[],int n){
    int res=arr[0];
    for(int i=1;i<n;i++){
        res=res^arr[i];
    }
    return res;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<oneOddOccuring(arr,n);
    return 0;
}