class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int x:nums){
            freq[x]++;
        }
        int maxfreq = -1;
        int max = -1;
        for(int x:nums){
            if(freq[x]>maxfreq){
                maxfreq = freq[x];
                max = x;
            }
        }
        return max;
    }
};