//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/
/*
class Solution {
public:
int f(vector<int>& arr, int k)
{
    int low=0;
    int high=arr.size()-1;
    int ans=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==k) ans=mid;
        //check if the left part is sorted or not
        if(arr[low]==arr[mid] and arr[mid]==arr[high])
        {
            low++;
            high--;
            continue;
        }
        if(arr[low]<=arr[mid])
        {
            if(arr[low]<=k and k<=arr[mid])
            {
                high=mid-1;
            }
            else low=mid+1;
        }
        else 
        {
            if(arr[mid]<=k and k<=arr[high])
            {
                low=mid+1;
            }
            else high=mid-1;
        }
    }
    return ans;
}
    bool search(vector<int>& nums, int target) {
       int a=f(nums,target);
       if(a==-1) return false;
       return true; 
    }
};
*/