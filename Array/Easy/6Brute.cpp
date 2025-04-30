/*
void rotateArray(vector<int>& nums, int k) {
    int n = nums.size();
    if (n == 0) return;

    k = k % n;  // In case k > n
    if (k == 0) return;

    int temp[k];  // Step 1: store last k elements
    for (int i = 0; i < k; i++) {
        temp[i] = nums[n - k + i];               temp = [5, 6, 7] 
    }

    // Step 2: shift elements to the right
    for (int i = n - 1; i >= k; i--) {
        nums[i] = nums[i - k];                 nums = [1, 2, 3, 1, 2, 3, 4]  
    }

    // Step 3: copy temp to the front
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];                  nums = [5, 6, 7, 1, 2, 3, 4]
    }
}
*/


/*
Time Complexity: O(N)
Space Complexity: O(k)
*/