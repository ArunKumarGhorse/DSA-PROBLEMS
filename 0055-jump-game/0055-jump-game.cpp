class Solution {
public:
    bool Helper(vector<int>&nums,int idx,int n,vector<int>&DP){
        if(idx>=n) return 1;
        if(DP[idx]!=-1) return DP[idx];
        for(int i=1;i<=nums[idx];i++){
            if(Helper(nums,idx+i,n,DP)) return DP[idx]=1;
        }
        return DP[idx]=0;
    }
    bool canJump(vector<int>& nums) {
        vector<int>DP(nums.size()+1,-1);
        return Helper(nums,0,nums.size()-1,DP);
    }
};