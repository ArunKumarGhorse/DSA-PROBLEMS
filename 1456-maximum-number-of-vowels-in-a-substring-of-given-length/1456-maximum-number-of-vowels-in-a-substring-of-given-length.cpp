class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0,maxCnt=0,cnt=0;
        for(int right=0;right<s.length();right++){
            if(right-left+1>k){
                if(s[left]=='i'||s[left]=='a'||s[left]=='e'||s[left]=='o'||s[left]=='u'){
                    cnt--;
                }
                left++;
            }
            if(s[right]=='i'||s[right]=='a'||s[right]=='e'||s[right]=='o'||s[right]=='u'){
                cnt++;
            }
            maxCnt=max(maxCnt,cnt);
        }
        return maxCnt;
    }
};