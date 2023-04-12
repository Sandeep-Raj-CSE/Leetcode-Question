//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        sort(arr.begin(),arr.begin()+n/2);
        sort(arr.begin()+n/2,arr.end());
        
        int dominan=0;
        
        int i=0; 
        int j=n/2;
        
        
        while(i<n/2 && j<n){
            if(arr[i]>=5*arr[j]){
                dominan=dominan+n/2-i;
                j++;
            }else{
                i++;
            }
        }
        
        return dominan;
        
        
        
    }  
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends