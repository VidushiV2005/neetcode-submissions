class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int n:nums){
            freq[n]++;
        }
        vector<pair<int,int>> a;
        for(auto b:freq){
            a.push_back({b.second,b.first});
        }
        sort(a.rbegin(),a.rend());
        vector<int> c;
        for(int i=0;i<k;i++){
            c.push_back({a[i].second});
        }
        return c;
    }
};
