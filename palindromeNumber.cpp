#include <iostream>

bool isPalindrome(int n){
    int rev=0,t=n;
    while(n){
        rev=10*rev+n%10;
        n/=10;
    }
    if(rev==t)
        return true;
    else
        return false;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    if(isPalindrome(n))
        std::cout<<"Yes";
    else   
        std::cout<<"No";
    return 0;
}