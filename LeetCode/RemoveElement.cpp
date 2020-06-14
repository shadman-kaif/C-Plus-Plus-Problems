class Solution {
public:
    /*
    Given an array nums and a value val, remove all instances of that value in-place and return the new length.

    Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

    The order of elements can be changed. It doesn't matter what you leave beyond the new length.
    */
    int removeElement(vector<int>& nums, int val) {
        for(int i = 0; i < nums.size();){
            if(nums[i]==val) {
                nums.erase(nums.begin() + i);
                if(i == 0) {
                    i=0;
                }
                else {
                    i--;
                }
            }
            else {
                i++;
            }
        }
        return nums.size();
            
        // -------------- SOLUTION ALLOCATING SPACE FOR ANOTHER ARRAY --------------- //
        /*if (nums.size() == 0) return 0;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                result.push_back(nums[i]);
            }
        }
        nums = result;
        return nums.size();*/
    }
};
