//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
//#mod 1000000009
class Solution{   
public:

    int countPaths(int n){
        // code here 
         long mod=1000000007;
	    
        
        int route[n+1];
        route[1]=0;
        route[2]=3;
        
        long long ans=3;
         for(int i=3;i<=n;i++)
      {
          ans=(ans*3)%mod;
          route[i]=(ans-route[i-1]+mod)%mod;
      }
      return route[n];
    }
        
    };

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends