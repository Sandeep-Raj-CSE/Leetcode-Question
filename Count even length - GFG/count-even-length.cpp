//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
 public:
//  int m = 1e9+7;
//  long long binpow(long long a, long long b) {
//         a %= m;
//         long long res = 1;
//         while (b > 0) {
//             if (b & 1)
//                 res = res * a % m;
//             a = a * a % m;
//             b >>= 1;
//         }
//         return res;
//     }
//     long long inv(int n) {
//         return binpow(n, m-2);
//     }
//  int compute_value(int n)
//  {
//      long long ans = 1, num = 1, den = 1, cur = n;
//      for(int i = 1, j = n; i <= n; i++, j--) 
//      {
//          num = (num * j) % m;
//          den = (den * i) % m;
         
//          long long temp = (num * inv(den)) % m;
//          temp = binpow(temp, 2);
//          ans = (ans + temp) % m;
//      }
//      return (int)ans;
//  }



	int mod = 1000000007;
	long long inv(long long int r){
	    if(r==1) return 1;
	    return (mod-((mod/r)*inv(mod%r))%mod+mod)%mod;
	}
	int compute_value(int n){
	    long long int ans =1, ncr=1;
	    for(int i=1;i<=n;i++){
	        ncr=(((ncr*(n+1-i))%mod)*inv(i))%mod;
	        ans=(ans+(ncr*ncr)%mod)%mod;
	    }
	    return ans%mod;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans = ob.compute_value(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends