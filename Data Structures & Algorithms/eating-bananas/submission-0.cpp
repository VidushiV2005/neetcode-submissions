class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        while(l<=r){
            int m=l+(r-l)/2;
            long long hr=0;
            for(auto p:piles){
                hr+=(p+m-1)/m;
            }
            if(hr<=h){
                r=m-1;
            }
            else{
                l=m+1;
            }
            
           
        }
         return l;
    }
};
