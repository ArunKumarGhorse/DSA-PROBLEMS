class Solution {
public:
    
    bool isNice(string temp){
        for(int i=0;i<temp.length();i++){
            char c = temp[i];
            char opposite = isupper(c)?tolower(c):toupper(c);
            if(temp.find(opposite)==string::npos) return false;
        }
        return true;
    }

    string longestNiceSubstring(string s) {
        string ans="";
        for(int i=0;i<s.length();i++){
            string temp="";
            for(int j=i;j<s.length();j++){
                    temp+=s[j];
                    if(isNice(temp)){
                        if(temp.length()>ans.length()){
                            ans=temp;
                        }
                    }
            }
            temp="";
        }
        return ans;
     }
};