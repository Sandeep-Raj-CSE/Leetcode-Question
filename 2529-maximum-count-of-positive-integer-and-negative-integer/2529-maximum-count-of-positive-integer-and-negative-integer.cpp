class Solution {
public:
    int maximumCount(vector<int>& arr) {
        int n=arr.size();
        int pos=0;
        int neg=0;
        
        for(int i=0; i<n;i++){
            if(arr[i]>0){
                pos++;
            }else if(arr[i]<0){
                neg++;
            }
        }
        return max(pos,neg);
        
    }
};