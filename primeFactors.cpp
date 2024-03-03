#include <iostream>
#include <math.h>

void primeFactors(int n){
    if(n<=1)
        return;
    while(n%2==0){
        std::cout<<2<<" ";
        n/=2;
    }
    while(n%3==0){
        std::cout<<3<<" ";
        n/=3;
    }
    for(int i=5;i*i<=n;i=i+6){
        while(n%i==0){
            std::cout<<i<<" ";
            n/=i;
        }
        while(n%(i+2)==0){
            std::cout<<i+2<<" ";
            n/=(i+2);
        }
    }
    if(n>3)
        std::cout<<n;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    primeFactors(n);
    return 0;
}