class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int sum = 0 , num = nums[i], dig = 0;
            while(num>0){
                dig = num % 10;
                sum+=dig;
                num/=10;
            }
            if(sum==i) return i;
        }
        return -1;
    }
};