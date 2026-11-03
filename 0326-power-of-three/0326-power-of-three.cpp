class Solution {
public:
    bool isPowerOfThree(int n) {
        long long x=n;
        if(x<=0) return false;
        while(x>1){
            if(x%3!=0) return false;
            x=x/3.0;
        }
        if (x==1) return true;
        else return false;
    }
};