#include <iostream>

int countDigit(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;
    }
    return count;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    std::cout<<countDigit(n);
    return 0;
}