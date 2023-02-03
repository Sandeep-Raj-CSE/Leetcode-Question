//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> mat, int r, int c){
        //code here
        int i=0;
        int j=0;
        
        int n=mat.size();
        int m=mat[0].size();
        
        int dirn=0;
        int fst,snd;
        
        while(i>=0 && j>=0 && i<n && j<m){
            if(mat[i][j]==1){

                dirn=(dirn+1)%4;
                mat[i][j]=0;
            }
            fst=i,snd=j;
            if(dirn==0)
                j++;
            else if(dirn==1)
                i++;
            else if(dirn==2)
                j--;
            else
                i--;
        }
        return {fst,snd};
            
        
    }
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends