class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
      int X=0;
        for(string c : operations)
        {
            if(c == "--X" || c=="X--")
            {
                X = X - 1;
            }
            else
            {
                X = X + 1;
            }
        }
        return X;   
    }
};