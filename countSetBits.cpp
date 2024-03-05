#include <iostream>
#include <math.h>

int tbl[256]; //lookup

void lookup(){
    tbl[0]=0;
    for(int i=1;i<256;i++){
        //tbl[i]=(i & 1) + tbl[i / 2];
        tbl[i]=tbl[i&(i-1)]+1;
    }
}

int countSetBits(int n){
    //int ctr=0;
    /*my method O(digits in binary(n))
    while(n){
        ctr+=(n&1);
        n>>=1;
    }*/
    /*Brian Kernighan’s Algorithm O(set bits)
    while(n){
        n&=(n-1);
        ctr++;
    }*/
    //lookup table O(1)
    return tbl[n & 0xff] + 
        tbl[(n >> 8) & 0xff] + 
        tbl[(n >> 16) & 0xff] + 
        tbl[n >> 24];
}

int main(){
    lookup();
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    std::cout<<countSetBits(n);
    return 0;
}