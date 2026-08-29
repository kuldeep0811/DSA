class Solution {
public:
    bool isPalindrome(int x) {
        int original,digit;
        long long reverse=0;
        original=x;
        while(x>0){
            digit=x%10;
            reverse=reverse*10+digit;
            x=x/10;
        }
        if(original==reverse){
            return true;
        }else{
            return false;
        }
        
    }
};