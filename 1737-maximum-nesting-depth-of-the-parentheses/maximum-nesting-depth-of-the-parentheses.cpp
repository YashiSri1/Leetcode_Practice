class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;
        int cnt=0,maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(i);
                cnt++;
            }
            else if(s[i]==')'){
                maxi=max(cnt,maxi);
                st.pop();
                cnt--;
            }
        }
        return maxi;
    }
};