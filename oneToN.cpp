#include <iostream>

void oneToN(int n){
    if(n==0)
        return;
    oneToN(n-1);
    std::cout<<n<<" ";
}

/*Tail recursive
void oneToN(int n,int k=1){
    if(n==0)
        return;
    std::cout<<n<<" ";
    oneToN(n-1,k+1);
}
*/

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    oneToN(n);
    return 0;
}