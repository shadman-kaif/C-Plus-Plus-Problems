class Solution {
public:
    /*
    Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
    */
    int maxProduct(vector<int>& nums) {
        // If the size of the array is 2, return the product of the elements
        if (nums.size()==2) {
            return (nums[0]-1)*(nums[1]-1);
        }
        
        int max=0;
        int max2=0;

        for(int i=0; i < nums.size(); i++){
            if(nums[i] > max){
                max2 = max;
                max = nums[i];
            } 
            else if(nums[i] > max2){
                max2 = nums[i];
            }
        }
        
        int ans = (max-1)*(max2-1);
        return ans;
    }
};