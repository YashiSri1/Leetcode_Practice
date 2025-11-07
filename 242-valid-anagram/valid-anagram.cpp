class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freq(26, 0);
        for (char letter: s) {
            freq[letter - 'a']++;
        }
        for(char letter:t){
            freq[letter -'a']--;
        }
        
        for (int i:freq) {
            if (i != 0) 
                return false;
        }
                return true;
    }
};