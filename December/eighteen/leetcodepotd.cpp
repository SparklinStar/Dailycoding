class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int li=nums.size()-1;
        int lsi=nums.size()-2;
        int ans=nums[li]*nums[lsi]-nums[0]*nums[1];
        return ans;
    }
};