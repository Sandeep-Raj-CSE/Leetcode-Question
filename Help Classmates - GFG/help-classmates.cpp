//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{
    
    public:
    vector<int> help_classmate(vector<int> arr, int n) 
    { 
         stack<long  long>s;
        
        vector<int>res(n,0);
        
        for(int i=n-1;i>=0;i--){
            long long currval=arr[i];
            while(!s.empty() && s.top()>=currval)
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
		vector<int> array(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>array[i];
		}
		Solution obj;
		vector<int> result = obj.help_classmate(array,n);
		for (int i = 0; i < n; ++i)
		{
			cout<<result[i]<<" ";
		}
		cout<<"\n";
	}
	return 0; 
}


// } Driver Code Ends