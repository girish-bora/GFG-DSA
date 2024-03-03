#include <iostream>

int gcd(int n, int m){
    if(m==0)
        return n;
    else
        return gcd(m,n%m);
}

int lcm(int n, int m){
    return (n*m)/gcd(n,m);
}

int main(){
    std::cout<<"Enter: ";
    int n,m;
    std::cin>>n>>m;
    std::cout<<lcm(n,m);
    return 0;
}