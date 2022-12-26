class Solution {
public:
    bool canJump(vector<int>& nums) {
        int i=1,n=nums.size(),jump=nums[0];
        if(jump==0&&n!=1) return false;
        while(i<n){
            jump--;
            if(nums[i]>jump)
            jump=nums[i];
            if(jump==0&&i!=n-1)
            return false;
            i++;
        }
        return true;
    }
};