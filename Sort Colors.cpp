75. Sort Colors
Medium
16.9K
581
Companies
Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

Example 1:

Input: nums = [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Example 2:

Input: nums = [2,0,1]
Output: [0,1,2]
 

Constraints:

n == nums.length
1 <= n <= 300
nums[i] is either 0, 1, or 2.

code ##################################################

class Solution {
public:
    void sortColors(vector<int>& nums) {

        int r=0;
        int w=0;
        int b=0;

        for(int i =0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                r++;
            }
            if(nums[i]==1)
            {
                w++;
            }
            if(nums[i]==2)
            {
                b++;
            }
        }
        int ind=0;

        for(int i =0;i<r;i++)
        {
            nums[ind]=0;
            ind++;

        }
        for(int i =0;i<w;i++)
        {
            nums[ind]=1;
            ind++;
        }
        for(int i =0;i<b;i++)
        {
            nums[ind]=2;
            ind++;
        }
        
    }
};