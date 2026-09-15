class Solution {
public:
    long long shadowPairs(vector<int>& nums) {
        vector<int> st;
        long long ans = 0;

        for (int x : nums) {
            
            while (!st.empty() && st.back() > x) {
                st.pop_back();
            }
            ans += lower_bound(st.begin(), st.end(), x) - st.begin();

            st.push_back(x);
        }

        return ans;
    }
};