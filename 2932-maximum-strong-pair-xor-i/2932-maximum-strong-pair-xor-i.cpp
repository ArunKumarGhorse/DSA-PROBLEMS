class Solution {
public:
    bool StrongPair(int x, int y){
        return abs(x-y)<=min(x,y);
    }
    int maximumStrongPairXor(vector<int>& nums) {
        int maxXor=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(StrongPair(nums[i],nums[j])){
                    maxXor=max(maxXor,nums[i]^nums[j]);
                }
            }
        }
        return maxXor;
    }
};