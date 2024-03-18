#include <iostream>

int maxEvenOdd(int arr[], int n)
{
    int ctr=1,maxctr=1;
    for(int i=1;i<n;i++){
        if((arr[i]%2==0&&arr[i-1]%2==1)||(arr[i]%2==1&&arr[i-1]%2==0)){
            ctr++;
            maxctr=std::max(maxctr,ctr);
        }
        else
            ctr=1;
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
    std::cout<<maxEvenOdd(arr,n);
}