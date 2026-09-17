class Solution {
public:
    void reverseString(vector<char>& s) {
        int st=0;
        int l=s.size()-1;
        while(l>st){
            swap(s[st],s[l]);
            st++;
            l--;
        }
        
    }
};