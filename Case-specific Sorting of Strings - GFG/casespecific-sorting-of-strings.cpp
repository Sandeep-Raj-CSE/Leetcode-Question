//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    string sort_low(string &st){
        int n = st.length() ;
        vector<int>first(26 , 0);
        for(auto it : st){
            first[it - 'a']++;
        }
        int j = 0 ;
        for(int i = 0; i < 26 ; i++){
            int k = first[i] ;
            while(k--){
                st[j] = i + 'a';
                j++;
            }
        }
        return st ;
        
    }
    string sort_upp(string &st){
        int n = st.length() ;
        vector<int>first(26 , 0);
        for(auto it : st){
            first[it - 'A']++;
        }
        int j = 0 ;
        for(int i = 0; i < 26 ; i++){
            int k = first[i] ;
            while(k--){
                st[j] = i + 'A';
                j++;
            }
        }
        return st ;
    }
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string first , second ;
        for(auto it : str){
            if(islower(it)){
                first += it ;
            }
            else{
                second+= it ;
            }
        }
        first = sort_low(first) ;
        second = sort_upp(second) ;
        int a = 0 , b = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(islower(str[i])){
                str[i] = first[a++];
            }
            else{
                str[i] = second[b++];
            }
        }
        return str ;
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends