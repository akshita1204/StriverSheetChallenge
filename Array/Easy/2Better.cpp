
/*

class Solution {
public:
    int secondLargestElement(vector<int>& arr) {
        //your code goes here
        int n=arr.size();
    if(n==0 || n==1) return -1;
    int maxi=INT_MIN,smaxi=INT_MIN;
    int i;
    for(i=0;i<n;i++)
    {
        large=max(large,arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>smaxi && arr[i]!=maxi)
            smaxi=arr[i];
    }      
    }
};
*/

/*
Time=> O(n)
Space=> O(1)
*/