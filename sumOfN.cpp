#include <iostream>

int sumOfN(int n){
    if(n==0)
        return 0;
    return n+sumOfN(n-1);
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    std::cout<<sumOfN(n);
    return 0;
}