class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> si;
        int l=0;
        int a=0;
        for(int r=0;r<s.length();r++){
            while(si.count(s[r])){
                si.erase(s[l]);
                l++;
            }
            si.insert(s[r]);
            a=max(a,r-l+1);
        }
        return a;
            
        
    }
};
