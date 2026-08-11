class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int> c;
        vector<int> res(n,0);
        for(int i=0;i<n;i++){
            while(!c.empty() && temperatures[i]>temperatures[c.top()]){
            int prev=c.top();
            c.pop();
            res[prev]=i-prev;
        }
        c.push(i);
        }
         return res;
    }
   
};
