#include <iostream>

void reverse(int arr[], int low, int high){
    while(high>low){
        std::swap(arr[high],arr[low]);
        high--;
        low++;
    }
}

void leftRotateByD(int arr[], int n,int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}

int main(){
    std::cout<<"Enter: ";
    int n,d;
    std::cin>>n>>d;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    leftRotateByD(arr,n,d);

    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}