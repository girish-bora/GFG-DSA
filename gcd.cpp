#include <iostream>

int gcd(int n, int m){
    //Euclidean algo
    /*while(n!=m){
        if(n>m)
            n=n-m;
        else
            m=m-n;
    }
    return n;*/
    if(m==0)
        return n;
    else
        return gcd(m,n%m);
}

int main(){
    std::cout<<"Enter: ";
    int n,m;
    std::cin>>n>>m;
    std::cout<<gcd(n,m);
    return 0;
}