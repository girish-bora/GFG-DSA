#include <iostream>

int maxAppearing(int left[],int right[], int n)
{
    int freq[101]={0};
    for(int i=0;i<n;i++){
        freq[left[i]]++;
        freq[right[i]+1]--;
    }
    int res=0;
    for(int i=1;i<100;i++){
        freq[i]=freq[i-1]+freq[i];
        if(freq[i]>freq[res])
            res=i;
    }
    return res;
}

int main(){
    std::cout<<"Enter: ";
    int n=4;
    int left[n]={1,2,3,3},right[n]={8,9,10,11};
    std::cout<<maxAppearing(left,right,n);
}