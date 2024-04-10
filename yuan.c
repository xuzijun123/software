#include <stdio.h>

// 函数用于求解最大连续子数组和
int maxSubArray(int* nums, int numsSize) {
    int max = nums[0]; // 初始化最大值为数组的第一个元素
    int sum = nums[0]; // 初始化当前子数组和为数组的第一个元素

    // 从数组的第二个元素开始遍历
    for (int i = 1; i < numsSize; i++) {
        // 如果当前元素加上前面的和比当前元素本身大，则更新和为当前元素本身
        sum = (sum + nums[i] > nums[i]) ? sum + nums[i] : nums[i];
        // 更新最大连续子数组和
        max = (sum > max) ? sum : max;
    }

    // 如果最大连续子数组和为负数，则返回0
    if (max < 0) {
        return 0;
    }

    return max;
}

int main() {
    // 第一组测试用例
    int nums1[] = { 8, 10, -7, 4, -1, 7, -9, -5, 4 };
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int maxSum1 = maxSubArray(nums1, numsSize1);
    printf("Test Case 1: 最大连续子数组和为: %d\n", maxSum1);

    // 第二组测试用例
    int nums2[] = { 4, 2, 9, 4, 5 };
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int maxSum2 = maxSubArray(nums2, numsSize2);
    printf("Test Case 2: 最大连续子数组和为: %d\n", maxSum2);

    // 第三组测试用例
    int nums3[] = { -1, -2, -55, -4, -5 };
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
    int maxSum3 = maxSubArray(nums3, numsSize3);
    printf("Test Case 3: 最大连续子数组和为: %d\n", maxSum3);

    // 第四组测试用例
    int nums4[] = { 5, -3, 34, -8, 18 };
    int numsSize4 = sizeof(nums4) / sizeof(nums4[0]);
    int maxSum4 = maxSubArray(nums4, numsSize4);
    printf("Test Case 4: 最大连续子数组和为: %d\n", maxSum4);

    return 0;
}