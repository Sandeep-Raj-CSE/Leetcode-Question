//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    int trailingZeroes(int n)
    {
    //     // Write Your Code here
    //     int res=1;
    //     int ans=0;
    //     // for(int i=2; i<=N;i++){
    //     //     res=res*i;
    //     // }
    //   // int ans=0;
       
    //   if(n==0)return 1;
    //   res=n*trailingZeroes(n-1);
    //     while(res%10==0){
    //         ans++;
    //         res=res/10;
    //     }
    //     return ans;
    
    if (n < 0) // Negative Number Edge Case
        return -1;
 
    // Initialize result
    int count = 0;
 
    // Keep dividing n by powers of
    // 5 and update count
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
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
        cin >> N;
        Solution ob;
        int ans  = ob.trailingZeroes(N);
        cout<<ans<<endl;
    }
    return 0;
}
// } Driver Code Ends