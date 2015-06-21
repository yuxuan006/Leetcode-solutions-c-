//Leetcode c++
//Search Insert Position 
/*
 Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.
 
 You may assume no duplicates in the array.
 
 Here are few examples.
 [1,3,5,6], 5 → 2
 [1,3,5,6], 2 → 1
 [1,3,5,6], 7 → 4
 [1,3,5,6], 0 → 0
*/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i = 0, j = nums.size()-1;
        int mid;
        while(i < j){
            mid = (i + j )/2;
            if(nums[mid] == target)return mid;
            else if(nums[mid] > target){
                j = mid - 1;
            }
            else{
                i = mid + 1;
            }
        }
        if(nums[i] < target)return i+1;
        return i;
        
    }
    
};