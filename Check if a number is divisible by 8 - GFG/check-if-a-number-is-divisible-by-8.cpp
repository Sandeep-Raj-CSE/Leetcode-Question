//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int DivisibleByEight(string s){
        int ch=-1;
        if(s.size()<9){
            int val=stoi(s);
            ch=val%8;
        }else{
            string v="";
            int n=s.size();
            v+=s[n-3];
            v+=s[n-2];
            v+=s[n-1];
            
            int val=stoi(v);
            ch=val%8;
        }
        
        if(ch==0) ch=1;
        else ch=-1;
        return ch;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout<<ob.DivisibleByEight(S)<<"\n";
    }
}
// } Driver Code Ends