class Solution {
public:
    int mySqrt(int n) {
        int l=0,r=n,ans=0;
        while(l<=r){
            long long mid = (l+r)/2;
            if(mid*mid > n) r=mid-1;
            else {
                ans = mid;
                l=mid+1;
            }
        }
        return ans;
    }
};