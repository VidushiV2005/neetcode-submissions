class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int mSum=nums[0];
        int cSum=nums[0];
        for (int i=1;i<nums.size();i++){
            cSum=max(nums[i],nums[i]+cSum);
            mSum=max(mSum,cSum);
        }
        return mSum;

    }
};
