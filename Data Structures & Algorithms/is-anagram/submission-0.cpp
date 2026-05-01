class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> sf;
        unordered_map<char,int> tf;
        if(s.length()!=t.length()){
            return false;
        }
        for (char ch:s){
            sf[ch]++;
        }
        for(char sh:t){
            tf[sh]++;
        }
        if(tf==sf) return true;
        return false;
        

        
    }
};
