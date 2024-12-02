class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long rev=0 ;
        int xcopy=x;
        while(x>0)
        {
           int ld=x%10;
            rev=( rev*10 ) + ld;
            x=x/10;
        }
        
      if(rev==xcopy)
return true;
else 
return false;        
    }
};