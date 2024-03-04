#include <iostream>
#include <math.h>
#include<vector>

void sieve(int n){
    std::vector<bool> prime(n+1,true);
    for(int i=2;i<=n;i++){
        if(prime[i]){
            std::cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i)
                prime[j]=false;
        }
    }
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    sieve(n); //prime no <= n
    return 0;
}