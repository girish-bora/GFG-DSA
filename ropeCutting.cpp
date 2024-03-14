#include <iostream>
//#include <algorithm>

int ropeCutting(int n,int a,int b,int c){
    if(n==0)
        return 0;
    if(n<0)
        return -1;
    int res=std::max(ropeCutting(n-a,a,b,c),std::max(ropeCutting(n-b,a,b,c),ropeCutting(n-c,a,b,c)));
    if(res==-1)
        return -1;
    else
        return res+1;
}

int main(){
    std::cout<<"Enter: ";
    int n,a,b,c;
    std::cin>>n>>a>>b>>c;
    std::cout<<ropeCutting(n,a,b,c);
    return 0;
}