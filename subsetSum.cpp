#include <iostream>

int subsetSum(int arr[], int n, int sum)
{
	if(n==0)
		return sum==0? 1 : 0;

	return subsetSum(arr, n-1, sum) + subsetSum(arr, n-1, sum - arr[n-1]);
}

int main(){
    std::cout<<"Enter: ";
    int n = 3, arr[]= {10, 20, 15}, sum = 25;
    	
    std::cout<<subsetSum(arr, n, sum);
    return 0;
}