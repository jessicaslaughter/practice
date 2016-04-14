/* Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length. */

int removeDuplicates(int* nums, int numsSize) {
    int length, i, j;
    length = numsSize;
    if (length < 2) {
        return length;
    }
    i = 0;
    for (j = 1; j < numsSize; j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
        else {
            length--;
        }
    }
    return length;
}