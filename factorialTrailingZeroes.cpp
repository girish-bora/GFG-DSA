#include <iostream>

long long factorialTrailingZeroes(int n){
    int zero=0;
    for(int i=5;i<n;i*=5){
        zero+=n/i;
    }

    return zero;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    std::cout<<factorialTrailingZeroes(n);
    return 0;
}