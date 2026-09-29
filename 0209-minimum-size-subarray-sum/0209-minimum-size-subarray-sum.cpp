class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left=0,sum=0,minl=INT_MAX;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            if(sum>=target){
                minl=min(minl,right-left+1);
                while(sum>=target){
                    sum-=nums[left];
                    left++;
                if(sum>=target){
                    minl=min(minl,right-left+1);
                } 
                }
                // if(sum>=target){
                //     minl=min(minl,right-left+1);
                // }   
            }
        }
        if(minl==INT_MAX) return 0;
        return minl;
    }
};
// [2,3,1,2,4,3]


// [2,5,6,8,12,15]
// [15,13,10,9,7,3]