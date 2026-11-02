class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        vector <int> ans(n);
        int l=0,r=n-1;
        for(int i=n-1;i>=0;i--){
            int l2= nums[l]*nums[l];
            int r2= nums[r]*nums[r];
            if(l2>r2){
                ans[i] = l2;
                l++;
            }
            else {
                ans[i] = r2;
                r--;
            }

        }
        return ans;
    }
};