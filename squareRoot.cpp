#include <iostream>

int squareRoot(int n)
{
    int start=1,end=n,res=-1;
    while(start<=end){
        int mid=(start+end)/2;
        int midsqr=mid*mid;
        if(midsqr==n)
            return mid;
        else if(midsqr>n)
            end=mid-1;
        else{
            start=mid+1;
            res=mid;
        }
    }
    return res;
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    std::cout<<squareRoot(n);
}