//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int maxInstance(string s){
        vector<int>ch(26);
        for(int i=0; i<s.size();i++)
        ch[s[i]-'a']++;
        // b=1 a=0 l=11 l=11 o=14 o=14 n=13
        return min({ch[1],ch[0],ch[11]/2,ch[14]/2,ch[13]});
        
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.maxInstance(s)<<endl;
    }
    return 0;
}
// } Driver Code Ends