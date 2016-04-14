/* Suppose a sorted array is rotated at some pivot unknown to you beforehand.

(i.e., 0 1 2 4 5 6 7 might become 4 5 6 7 0 1 2).

Find the minimum element. */

int findMin(int* nums, int numsSize) {
    int i, min;
    min = nums[0];
    
    if (numsSize == 0) {
        return 0;
    }
    
    for (i = 0; i < numsSize-1; i++) {
        if (nums[i+1] < nums[i]) {
            min = nums[i+1];
            break;
        }
    }
    
    return min;
}