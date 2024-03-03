#include <iostream>

int gcd(int n, int m){
    while(n!=m){
        if(n>m)
            n=n-m;
        else
            m=m-n;
    }
    return n;
}

int main(){
    std::cout<<"Enter: ";
    int n,m;
    std::cin>>n>>m;
    std::cout<<gcd(n,m);
    return 0;
}