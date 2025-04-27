/*
class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
              set < int > set;
              for (int i = 0; i < n; i++) {
               set.insert(nums[i]);
               }
             int k = set.size();
             int j = 0;
            for (int x: set) {
            nums[j++] = x;
             }
            return k;  
        }
    };
*/


//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
/*
Time: O(n*log(n))+O(n)
Space : O(n) 
*/