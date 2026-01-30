class Solution {
public:
    bool checkPerfectNumber(int num) {
        int cnt=0,temp=num;
        for(int i=1;i<num;i++){
            if(num%i==0){
                cnt+=i;
            }
        }
    if(cnt==temp)
    return true;
    else return false;
    }
};