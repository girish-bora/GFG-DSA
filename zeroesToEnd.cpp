#include <iostream>

void zeroesToEnd(int arr[], int n)
{
    /*for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==0&&arr[j]!=0){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }*/
    int ctr=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            std::swap(arr[ctr],arr[i]);
            ctr++;
        }
    }
    for(int i=0;i<n;i++){
        std::cout<<arr[i]<<" ";
    }
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    zeroesToEnd(arr,n);
}