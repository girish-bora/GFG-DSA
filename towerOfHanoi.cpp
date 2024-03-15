#include <iostream>

void towerOfHanoi(int n, char A, char B, char C) 
{ 
    if (n == 1) 
    { 
        std::cout<<"Move 1 from " <<  A << " to " << C << std::endl; 
        return; 
    } 
    towerOfHanoi(n-1, A, C, B); 
    std::cout<<"Move " << n << " from " <<  A << " to " << C << std::endl; 
    towerOfHanoi(n-1, B, A, C); 
}

int main(){
    std::cout<<"Enter: ";
    int n;
    std::cin>>n;
    towerOfHanoi(n,'A','B','C');
    return 0;
}