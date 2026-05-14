class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_so_far = INT_MIN;
        int n  = nums.size();
        int bag = 0;
        for(int i = 0 ; i<n; i++){
            bag+=nums[i];
            if(bag>max_so_far){
                max_so_far = bag;
            }
            if(bag<0){
                bag = 0; 
            }
        }
        return max_so_far;
    }
};
