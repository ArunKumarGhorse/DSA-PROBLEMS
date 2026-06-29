class Solution {
public:
    bool isSubstr(vector<string>words,string s,int idx){
        for(int i=0;i<words.size();i++){
            if(i==idx) continue;
            if(words[i].find(s)!=string::npos){
                return true;
            }
        }
        return false;
    }
    vector<string> stringMatching(vector<string>& words) {
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            if(isSubstr(words,words[i],i)){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};