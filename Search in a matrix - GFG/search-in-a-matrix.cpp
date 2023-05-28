//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    // your code here
	    
	    int row=mat.size();
	    int col=mat[0].size();
	    
	    
	    for(int i=0; i<row;i++){
	        for(int j=0; j<col;j++){
	            if(mat[i][j]==X){
	                return true;
	            }
	        }
	    }
	    
	    return false;
	}
};

//{ Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--){
        int n, m; cin >> n >> m;
        vector <vector <int>> arr (n, vector <int> (m));
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin >> arr[i][j];
                
        int x; cin >> x;
        Solution ob;
        cout << ob.matSearch (arr, n, m, x) << endl;
    }
}
// } Driver Code Ends