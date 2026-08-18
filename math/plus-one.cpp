class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i=0;i<n;i++){
            if(digits[i] == digits[n] ){
                digits[n]++;
                return digits;
            }
            return digits;
        }
        return {};
    }
};