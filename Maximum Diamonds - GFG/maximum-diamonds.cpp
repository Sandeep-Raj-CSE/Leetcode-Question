//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int arr[], int n, int k) {
        // code here
        long long sum = 0;
        
        priority_queue<int>pq;
        for(int i=0; i<n; i++)
        {
            pq.push(arr[i]);
        }
        
        while(k && !pq.empty())
        {
            k--;
            sum += pq.top();
            pq.push(pq.top()/2);
            pq.pop();
        }
        
        return sum;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends