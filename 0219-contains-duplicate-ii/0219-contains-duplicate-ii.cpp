class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>st;
        for(int r=0;r<nums.size();r++){
            if(r > k) {
                st.erase(nums[r - k - 1]);
            }

            if(st.count(nums[r])){
                return true;
            }

            st.insert(nums[r]);
        }
        return false;
    }
};