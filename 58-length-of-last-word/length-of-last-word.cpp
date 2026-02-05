class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int x=0;
         int end=s.size()-1;
        for (int i = end; i >= 0 &&s[i]==' '; i--) {
           x++;
        }
        for(int i=end-x;i>=0&&s[i]!=' ';i--){
            length++;
        }
        
        return length;
        
    }
};