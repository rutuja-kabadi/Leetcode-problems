class Solution {
public:
    vector<int> nextgreater(vector<int>& nums2){
        vector<int> ans(nums2.size(),-1);
        stack<int> st;
        int n=nums2.size();
        st.push(nums2[n-1]);
        for(int i=n-2;i>=0;i--){
            
            while(!st.empty()&& st.top()<=nums2[i]){
                st.pop();
            }
            if(st.empty()) ans[i] =-1;
            else ans[i] = st.top();
            st.push(nums2[i]);
        }
        return ans;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums3 = nextgreater(nums2);
        unordered_map<int,int> m;
        for(int i=0;i<nums2.size();i++){
            m[nums2[i]] = nums3[i];
        }
        vector<int> ans(nums1.size());
        for(int i=0;i<nums1.size();i++){
            ans[i] = m[nums1[i]];
        }
        return ans;
    }
};