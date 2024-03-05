#include <iostream>
#include <math.h>

bool powerOfTwo(int n){
    if(n&(n-1)||n==0)
        return 0;
    return 1;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    std::cout<<powerOfTwo(n);
    return 0;
}