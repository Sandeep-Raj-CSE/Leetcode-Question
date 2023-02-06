//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
 

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        // // Your code here
        // for(int i=0; i<32;i++){
        //     int bit1=m&(1<<i);
        //     int bit2=n&(i<<i);
            
        //     if(bit1!=bit2)
        //         return i+1;
            
        // }
        // return -1;
        
        if(m==n)return -1;
        
        int xr=m^n;
        
        return log2(xr & (~(xr-1)))+1;
    }
};

//{ Driver Code Starts.

// Driver Code
int main()
{   
    int t;
    cin>>t; //input number of testcases
    while(t--)
    {
         int m,n;
         cin>>m>>n; //input m and n
         Solution ob;
         cout << ob.posOfRightMostDiffBit(m, n)<<endl;
    }
    return 0;     
} 
// } Driver Code Ends