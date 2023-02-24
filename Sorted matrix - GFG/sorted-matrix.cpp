//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> mat) {
        // code here
       // return sort(mat.begin(),mat.end());
       vector<int>ans;
       // push the element in vector
       for(int i=0; i<N;i++){
           for(int j=0; j<N;j++){
               ans.push_back(mat[i][j]);
           }
       }
       // sort the vector
       sort(ans.begin(),ans.end());
       
       //put the real form
       int k=0;
       for(int i=0; i<N;i++){
           for(int j=0; j<N;j++){
               mat[i][j]=ans[k];
               k++;
           }
       }
       return mat;
       
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends