class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> s;
        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/speed[i];
            s.push_back({position[i],time});
        }
        sort(s.rbegin(),s.rend());
        stack<double> t;
        for(auto c:s){
            double te=c.second;
            if(t.empty() || te>t.top()   ){
                t.push(te);
            }
        }
        return t.size();
    }
};
