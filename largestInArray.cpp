#include <iostream>

int largestInArray(int arr[], int n)
{
	int max=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[max])
            max=i;
    }
    
    return max;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        std::cin>>arr[i];
    }
    std::cout<<largestInArray(arr,n);
}