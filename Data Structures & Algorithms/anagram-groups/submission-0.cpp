class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> a;
        for( string b:strs){
            string c=b;
            sort(c.begin(),c.end());
            a[c].push_back(b);
        }
        vector<vector<string>> d;
        for(auto e:a){
            d.push_back(e.second);
        }
        return d;
    }
};
