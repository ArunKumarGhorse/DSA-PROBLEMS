class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt=0,left=0,sum=0;
        for(int right=0;right<arr.size();right++){
            sum+=arr[right];

            if(right-left+1>k){
                sum-=arr[left];
                left++;
            }
            if(right-left+1 == k){
                if((sum/k)>=threshold) cnt++;
            }
        }
        return cnt;
    }
};