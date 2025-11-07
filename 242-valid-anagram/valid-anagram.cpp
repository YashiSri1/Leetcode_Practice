class Solution {
public:
    bool isAnagram(string s, string t) {
        int s1=s.length();
        int s2=t.length();
        int found=0;
        if(s1!=s2)
        return false;
        else{
            sort(s.begin(),s.end());
            sort(t.begin(),t.end());
            for(int i=0;i<s1;i++){
                if(s[i]==t[i])
                found++;
                else
                found=0;
            }
          if(found==s1)
          return true;
          else
          return false;
        }
        
    }
};