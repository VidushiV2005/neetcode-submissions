class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> t;
        int l=0;
        int mf=0;
        int a=0;
        for(int r=0;r<s.size();r++){
            t[s[r]]++;
            mf=max(mf,t[s[r]]);
            while((r-l+1)-mf>k){
                t[s[l]]--;
                l++;
            }
            a=max(a,r-l+1);
        }
        return a;
    }
};
