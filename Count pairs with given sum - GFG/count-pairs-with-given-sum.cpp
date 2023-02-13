//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        // int left=0; int right=n-1;
        // int count=0;
        // while(left<right)
        // {
        //     if(arr[left]+arr[right]==k)
        //         count++;
        //     else if(arr[left]+arr[right]>k)
        //         right--;
        //     else
        //         left++;
                
        
            
        // }
        // return count;
        
       unordered_map<int,int>m;
       int ans=0;
       for(int i=0; i<n;i++){
           if(k-arr[i]>0){
               ans=ans+m[k-arr[i]];
               m[arr[i]]++;
               
           }
       }
       return ans;
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends