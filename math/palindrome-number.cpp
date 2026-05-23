class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        int i = x;
        long rev=0;

        while(x>0){
            int j = x%10;
            rev = rev*10 + j;
            x=x/10;
        }
        return i==rev;

        
    }
};