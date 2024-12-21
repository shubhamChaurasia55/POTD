class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx = -1;
        int n = nums.size();
        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                idx = i;
                break;
            }
        }

        if (idx == -1){
            reverse(nums.begin(),nums.end());
            return;
        } 

        reverse(nums.begin()+idx+1,nums.end());
        int p2;
        for(int i=idx+1;i<n;i++){
            if(nums[idx]<nums[i]){
                p2 = i;
                break;
            } 
        }
        swap(nums[idx],nums[p2]);

        return;
    }
};