#include <iostream>
#include <math.h>

void divisors(int n){
    int i;
    for(i=1;i*i<n;i++){
        if (n%i==0)
            std::cout<<i<<" ";
    }
    for(;i>=1;i--){
        if (n%i==0)
            std::cout<<n/i<<" ";
    }
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    divisors(n);
    return 0;
}