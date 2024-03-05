#include <iostream>
#include <math.h>

bool kthBit(int n,int k){
    n=n>>(k-1);
    if(n&1)
        return 1;
    return 0;
}

int main(){
    std::cout<<"Enter: ";
    int n,k;
    std::cin>>n>>k;
    std::cout<<kthBit(n,k);
    return 0;
}