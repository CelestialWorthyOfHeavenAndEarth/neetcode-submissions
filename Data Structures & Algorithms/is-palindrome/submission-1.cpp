class Solution {
public:
    bool isPalindrome(string s) {
        string newstr = "";
        for(char x:s){
            if(isalnum(x)){
                newstr+=tolower(x);    
            }
        }
        int left = 0;
        int right = newstr.size()-1;

        while(left<=right){
            if(newstr[left]!=newstr[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
