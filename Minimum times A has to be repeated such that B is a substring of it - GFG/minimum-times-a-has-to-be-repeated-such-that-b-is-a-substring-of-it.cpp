//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int minRepeats(string str1, string str2) {
        // code here
         int m=str1.length();
         int n=str2.length();
 
          int count;
           bool found = false;
 
    for (int i = 0; i < m; i++) {
        int j = i;
        int k = 0;
        count = 1;
 
        while (k < n && str1[j] == str2[k]) {
            if (k == n - 1) {
                found = true;
                break;
            }
            j = (j + 1) % m;
 
            if (j == 0)
                count++;
 
            k++;
        }
        if (found)
            return count;
    }
    return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ",&t);
    while (t--) {
        string A,B;
        getline(cin,A);
        getline(cin,B);

        Solution ob;
        cout << ob.minRepeats(A,B) << endl;
    }
    return 0;
}
// } Driver Code Ends