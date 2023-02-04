//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
int isprime(int n){
    if(n<=1)return 0;
    
    for(int i=2; i*i<=n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
    vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        vector<int>v;
        
        for(int i=2;i<=n;i++){
            if(isprime(i)==1){
                v.push_back(i);
            }
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends