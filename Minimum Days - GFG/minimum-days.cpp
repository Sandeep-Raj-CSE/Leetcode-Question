//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%d ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends


class Solution {
  public:
    int getMinimumDays(int N,string S, vector<int> &P) {
        // code here
        int curr_day = 0;
        int ans = 0;
        for(int i = 0;i<N-1;i++)
        {
            if(S[i] == '?' || S[i+1] == '?')//if either of them is '?' we move forward
                continue;
            if(S[i]==S[i+1])//if both are same we need make some changes
            {
                while(curr_day<N && (P[curr_day] != i && P[curr_day] != i+1))//check if in range and if either of the index can be changed on curr_day
                {
                    S[P[curr_day]] = '?';//if not we need to move to the next day and as we are moving to the next day we better make this change now
                    curr_day++;//move to the next day
                }
                if(curr_day<N)//if we need to make changes on current day
                S[P[curr_day++]] = '?';//then do so and move forward
            }
        }
        //return the day we stand (as it is 0 based indexing and we move to the next day current day will suffice for answer)
        return curr_day;
    }
};
    

//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        string S;cin>>S;
        
        vector<int> P(N);
        Array::input(P,N);
        
        Solution obj;
        int res = obj.getMinimumDays(N,S, P);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends