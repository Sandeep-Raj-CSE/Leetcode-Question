//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int arr[],int n)
    {
        // Complete the function
        long  maxi=0;
        sort(arr,arr+n);
        for(long int i=0; i<n;i++){
            
            maxi+=(long) (arr[i]*i);
        
        }
        
        long  val= maxi % 1000000007;
        return (int) val;
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends