//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
#include <bits/stdc++.h>
class Solution{
    public:
    int searchInsertK(vector<int>nums, int N, int k)
    {
        // code here
      //  auto index=lower_bound(Arr.begin(),Arr.end(),k-Arr.begin());
       // return index;
       
         auto ans=lower_bound(nums.begin(),nums.end(),k);
       int index=ans-nums.begin();

        return index;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends