//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code herelong long fact=1;
        long double fact=1;
        int count=0;
        for(int i=2;i<=N;i++){
            fact*=i;
            if(fact>1000000){
                fact/=1000000;
                count+=6;
            }
        }
        while((int)fact){
            fact/=10;
            count++;
        }
        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    
    //taking testcases
    cin>>T;
    while(T--)
    {
        int N;
        
        //taking N
        cin>>N;
        Solution ob;
        //calling method digitsInFactorial()
        cout<<ob.digitsInFactorial(N)<<endl;
    }
    return 0;
}

// } Driver Code Ends