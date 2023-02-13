//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int distinctCount(int arr[], int n) {
        // code here
        vector<int>v;
        set<int>s;
        
        
        for(int i=0; i<n;i++){
            if(arr[i]>=0)
            v.push_back(arr[i]);
            
            if(arr[i]<0)
            v.push_back(arr[i]*(-1));
        }
        
        for(auto it:v){
            s.insert(it);
        }
        
        return s.size();
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.distinctCount(arr, n);
        cout << ans << "\n";
    }
    return 0;
}


// } Driver Code Ends