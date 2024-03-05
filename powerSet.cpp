#include <iostream>
#include <math.h>
void powerSet(char a[],int n){
    int powSet=1<<(n-1);
    for(int i=0;i<powSet;i++){
        for(int j=0;j<n-1;j++){
            if((i&(1<<j))!=0)    
                std::cout<<a[j];
        }
        std::cout<<std::endl;
    }
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    char a[n];
    std::cin>>a;
    powerSet(a,n);
    return 0;
}