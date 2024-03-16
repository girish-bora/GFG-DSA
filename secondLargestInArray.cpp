#include <iostream>

int secondLargestInArray(int arr[], int n)
{
	int max=0,smax=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[max]){
            smax=i;
            max=i;
        }
        else if(arr[i]!=arr[max]){
            if(smax==-1||arr[i]>arr[smax])
                smax=i;
        }
    }
    
    return smax;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<secondLargestInArray(arr,n);
}