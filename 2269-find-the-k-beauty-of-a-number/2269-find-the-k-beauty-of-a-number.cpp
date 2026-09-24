class Solution {
public:
    int divisorSubstrings(int nums, int k) {
        int left=0,cnt=0;
        string num="";
        num=to_string(nums);
        for(int right=0;right+k-1<num.length();right++){

            string temp=num.substr(right,k);
            int x = stoi(temp);
            if(x!=0 && nums%x==0){
                cnt++;
            }
        }
        return cnt;
    }
};