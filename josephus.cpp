#include <iostream>

int josephus(int n, int k) 
{ 
    if(n==1){
        return 0;
    }
    return (josephus(n-1,k)+k)%n;
}

int main(){
    std::cout<<"Enter: ";
    int n,k;
    std::cin>>n>>k;
    std::cout<<josephus(n,k);
    return 0;
}