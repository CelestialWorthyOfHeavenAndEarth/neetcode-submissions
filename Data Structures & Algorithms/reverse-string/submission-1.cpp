class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int j = n-1;
        for(int i = 0; i<j;i++,j-- ){
            swap(s[i],s[j]);
        }

    }
};