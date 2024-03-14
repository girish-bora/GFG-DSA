#include <iostream>

int sumOfDigits(int n){
    if(n<=9)
        return n;
    return n%10+sumOfDigits(n/10);
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    std::cout<<sumOfDigits(n);
    return 0;
}