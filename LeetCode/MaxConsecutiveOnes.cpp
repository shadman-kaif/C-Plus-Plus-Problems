class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if(nums.size() == 0) {
            return 0;
        } 
        
        int count = 0, ones = 0;
        
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1) {
                count++;
            }
            if(nums[i]==0){
                ones = max(ones,count);
                count=0;
            }
        }
        return max(ones,count); 
    }
};