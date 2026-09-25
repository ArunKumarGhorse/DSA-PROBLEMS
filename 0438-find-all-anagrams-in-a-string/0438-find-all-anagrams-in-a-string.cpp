class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        int k=p.length();
        unordered_map<char,int>Pmap;
        unordered_map<char,int>window;
        for(int i=0;i<k;i++){
            Pmap[p[i]]++;
        }
        int left=0;
        for(int right=0;right<s.length();right++){
            window[s[right]]++;
            if(right-left+1>k){
               window[s[left]]--;
               if(window[s[left]]==0){
                window.erase(s[left]);
               }
                left++;
            }
            if(right-left+1==k){
                if(Pmap==window){
                    res.push_back(left);
                }
            }
        }
        return res;
    }
};