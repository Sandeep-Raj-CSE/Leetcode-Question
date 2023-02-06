//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        unsigned int ans=0;
        for(int i=0; i<32;i++){
            int LSB=x&1;
            int revLSB=LSB<<(31-i);
            
            ans=ans|revLSB;
            x=x>>1;
        }
        
        return (ans);
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends