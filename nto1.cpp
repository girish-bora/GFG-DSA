#include <iostream>

void nto1(int n){
    if(n==0)
        return;
    std::cout<<n<<" ";
    nto1(n-1);
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    nto1(n);
    return 0;
}