class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> ans;
        unordered_map<int,int> m;
        for(int i=0;i<n1;i++){
            if(m[nums1[i]] >= 1) {

            }
            else m[nums1[i]]++;
        }
        for(int i=0;i<n2;i++){
            if(m[nums2[i]] >= 2){

            }
            else if(m[nums2[i]]==1) m[nums2[i]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second >=2) ans.push_back(it->first);
        }
        return ans;

    }
};