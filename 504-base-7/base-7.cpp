class Solution {
public:
    string convertToBase7(int num) {
         if(num == 0) return "0";
        int m = num, temp;
        string ans = "";
        if(num < 0) m = m * -1;
        while(m != 0){
            temp = m % 7;
            ans += temp + '0';
            m = m / 7;
        }
        if(num < 0) ans += '-';
        reverse(ans.begin(),ans.end());
        return ans;
    }
};