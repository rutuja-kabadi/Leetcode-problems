class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans;
        int a=0;
        for(int i=0;i<nums.size();i++){
            a+=nums[i];
            ans.push_back(a);
        }
        return ans;
    }
};