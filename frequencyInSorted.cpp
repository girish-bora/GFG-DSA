#include <iostream>

void freqSorted(int arr[], int n)
{
    /*wrong as arr[n] is garbage value
    int ctr=0;
    for(int i=1;i<=n;i++){
        ctr++;
        if(arr[i]!=arr[i-1]){
            std::cout<<arr[i-1]<<" "<<ctr<<std::endl;
            ctr=0;
        }
    }*/
    int i=1,ctr=1;
    while(i<n){
        while(i<n&&arr[i]==arr[i-1]){
            ctr++;
            i++;
        }
        std::cout<<arr[i-1]<<" "<<ctr<<std::endl;
        i++;
        ctr=1;
    }
    if(n==1||arr[n-1]!=arr[n-2])
        std::cout<<arr[n-1]<<" "<<1<<std::endl;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    freqSorted(arr,n);
}