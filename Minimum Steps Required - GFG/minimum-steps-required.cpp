//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) {
    // Write your code here.
    
    int a=0;
    int b=0;
    
    for(int i=0; i<str.size();i++)
    {
        if(str[i]=='a'){
            while(str[i]=='a'){
                i++;
            
            }
            
            a++;
            i--;
        }else{
            while(str[i]=='b'){
                i++;
            }
            b++;
            i--;
        }
        
        
    }
    int res=min(a,b);
    return res+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends