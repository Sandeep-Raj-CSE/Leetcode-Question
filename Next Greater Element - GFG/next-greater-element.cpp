//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template for C++ solution

class Solution {
  public:
    vector<long long> nextLargerElement(vector<long long> &arr, int n){
        // Your code here
        stack<long  long>s;
        
        vector<long long>res(n,0);
        
        for(int i=n-1;i>=0;i--){
            long long currval=arr[i];
            while(!s.empty() && s.top()<=currval)
                s.pop();
            
            
            // if(s.empty()){
            //     ans[i]=-1;
            // }else{
            //     ans[i]=arr[s.top()];
            // }
            res[i]=s.empty()?-1:s.top();

            s.push(currval);


        }
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution ob;
        
        vector <long long> res = ob.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}

// } Driver Code Ends