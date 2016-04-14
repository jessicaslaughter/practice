/* Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array. 
You may assume that nums1 has enough space (size that is greater or equal to m + n) to hold additional 
elements from nums2. The number of elements initialized in nums1 and nums2 are m and n respectively. 

Takeaway: Needed to start from the back of the array so that the elements wouldn't have to be shifted every time
an element is added */

void merge(int* nums1, int m, int* nums2, int n) {
    int i, a, b, c;
    a = m - 1;
    b = n - 1;
    c = m + n - 1;
    
    while (a >=0 && b >= 0) {
        if (nums1[a] > nums2[b]) {
            nums1[c] = nums1[a];
            a--;
        }
        else {
            nums1[c] = nums2[b];
            b--;
        }
        c--;
    }
    
    while (a >= 0) {
        nums1[c] = nums1[a];
        a--;
        c--;
    }
    while (b >= 0) {
        nums1[c] = nums2[b];
        b--;
        c--;
    }
}