#include <iostream>
#include <string>

bool isPalindrome(std::string& str,int start, int end){
    if(start>=end)
        return true;
    return (str[start]==str[end])&&isPalindrome(str,start+1,end-1);
}

int main(){
    std::cout<<"Enter: ";
    std::string str;
    std::cin>>str;
    int n;
    n=str.length()-1;
    std::cout<<isPalindrome(str,0,n);
    return 0;
}