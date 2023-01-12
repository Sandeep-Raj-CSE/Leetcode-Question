//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
public:
    int minimizeSum(int n, vector<int> arr) {
        // code here
        
        priority_queue<int>pq;
        
        // for(int i=0; i<arr.size();i++){
        //     pq.push(-1*i);
        // }
        
        for(auto i:arr){
            pq.push(-1*i);
        }
        
        int san=0;
        
        while(pq.size()>1){
            int a=-1*pq.top();
            pq.pop();
            
            int b=-1*pq.top();
            
            pq.pop();
            
            
            san=san+a+b;
            pq.push(-1*(a+b));
            
        }
        
        return san;
    }
};

//{ Driver Code Starts.

int main() {
	int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++)
            cin>>arr[i];
        Solution obj;
        cout << obj.minimizeSum(n, arr) << "\n";
    }
}
// } Driver Code Ends