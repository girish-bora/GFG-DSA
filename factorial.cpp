#include <iostream>

long long factorial(int n){
    long long fact=1;
    if(n==0||n==1)
        return 1;
    else{
        for(int i=2;i<=n;i++){
            fact*=i;
        }
    }
    return fact;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    std::cout<<factorial(n);
    return 0;
}