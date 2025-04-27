/*
class Solution {
public:
    int secondLargestElement(vector<int>& arr) {
        //your code goes here
    int n=arr.size();
    if(n<2) return -1;
    int maxi=INT_MIN,smaxi=INT_MIN;
    int i;
    for (i=0;i<n;i++) 
    {
        if (arr[i]>maxi) 
        {
            smaxi = maxi;
            maxi = arr[i];
        }
 
        else if (arr[i] > smaxi && arr[i] != maxi) 
        {
            smaxi= arr[i];
        }
    }
    return smaxi;       
    }
};
*/



/*
Time=> O(n log(n))
Space=> O(1)
*/