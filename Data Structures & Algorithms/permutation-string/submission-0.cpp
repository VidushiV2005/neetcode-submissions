class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size()){
            return false;
        }
        vector<int> n(26,0);
        vector<int> w(26,0);
        for(int c:s1){
            n[c-'a']++;
        }
        int k=s1.size();
        for(int i=0;i<s2.size();i++){
            w[s2[i]-'a']++;
            if(i>=k){
                w[s2[i-k]-'a']--;
            }
            if(w==n){
                return true;
            }
        }
        return false;
    }
};
