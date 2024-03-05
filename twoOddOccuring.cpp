#include <iostream>
#include <math.h>
void twoOddOccuring(int arr[],int n){
    int res=arr[0];
    int k,a=0,b=0;
    for(int i=1;i<n;i++){
        res=res^arr[i];
    }
    k=(res&(~(res-1)));
    for(int i=0;i<n;i++){
        if((arr[i]&k)!=0)
            a=a^arr[i];
        else
            b=b^arr[i];
    }
    std::cout<<a<<" "<<b;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    twoOddOccuring(arr,n);
    return 0;
}