class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>mp;
        int i = 0;
        for(int x:nums){
            mp[x]=i;
            i++;
        }
        int rem=0;
        for( i = 0;i<n;i++){
            rem = target-nums[i];
            if(mp.count(rem)&&mp[rem] != i){
                return {i, mp[rem]};
            }
        }
        return {};
    }
};
