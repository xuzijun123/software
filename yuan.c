#include <stdio.h>

// �������������������������
int maxSubArray(int* nums, int numsSize) {
    int max = nums[0]; // ��ʼ�����ֵΪ����ĵ�һ��Ԫ��
    int sum = nums[0]; // ��ʼ����ǰ�������Ϊ����ĵ�һ��Ԫ��

    // ������ĵڶ���Ԫ�ؿ�ʼ����
    for (int i = 1; i < numsSize; i++) {
        // �����ǰԪ�ؼ���ǰ��ĺͱȵ�ǰԪ�ر��������º�Ϊ��ǰԪ�ر���
        sum = (sum + nums[i] > nums[i]) ? sum + nums[i] : nums[i];
        // ������������������
        max = (sum > max) ? sum : max;
    }

    // �����������������Ϊ�������򷵻�0
    if (max < 0) {
        return 0;
    }

    return max;
}

int main() {
    // ��һ���������
    int nums1[] = { 8, 10, -7, 4, -1, 7, -9, -5, 4 };
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int maxSum1 = maxSubArray(nums1, numsSize1);
    printf("Test Case 1: ��������������Ϊ: %d\n", maxSum1);

    // �ڶ����������
    int nums2[] = { 4, 2, 9, 4, 5 };
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int maxSum2 = maxSubArray(nums2, numsSize2);
    printf("Test Case 2: ��������������Ϊ: %d\n", maxSum2);

    // �������������
    int nums3[] = { -1, -2, -55, -4, -5 };
    int numsSize3 = sizeof(nums3) / sizeof(nums3[0]);
    int maxSum3 = maxSubArray(nums3, numsSize3);
    printf("Test Case 3: ��������������Ϊ: %d\n", maxSum3);

    // �������������
    int nums4[] = { 5, -3, 34, -8, 18 };
    int numsSize4 = sizeof(nums4) / sizeof(nums4[0]);
    int maxSum4 = maxSubArray(nums4, numsSize4);
    printf("Test Case 4: ��������������Ϊ: %d\n", maxSum4);

    return 0;
}