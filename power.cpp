#include <iostream>
#include <math.h>
#include<vector>

int power(int n,int m){
    int res=1;
    while(m>0){
        if(m%2!=0)
            res*=n;
        n*=n;
        m/=2;
    }
    return res;
}

int main(){
    std::cout<<"Enter: ";
    int n,m;
    std::cin>>n>>m;
    std::cout<<power(n,m);
    return 0;
}