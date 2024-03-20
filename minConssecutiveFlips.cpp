#include <iostream>

void minConsecutiveFlips(int arr[], int n)
{
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[0])
            std::cout<<"From "<<i<<" to ";
        else
            std::cout<<i-1<<std::endl;
    }
    if(arr[n-1]!=arr[0])
        std::cout<<n-1<<std::endl;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    minConsecutiveFlips(arr,n);
}