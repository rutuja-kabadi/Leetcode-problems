class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.length();
        for(int i = 0; i< n;i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(st.empty()) return false;
                char tp = st.top();
                st.pop();
                if(tp == '(' && s[i] != ')') return false;
                if(tp == '[' && s[i] != ']') return false;
                if(tp == '{' && s[i] != '}') return false;
            }

        }
        if(st.empty()) return true;
        else return false;
    }
};