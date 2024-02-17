#include <stdint.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
	int i;
	int *result = malloc(2 * sizeof(int));

	for (i = 0; i < numsSize; i++)
	{
		int j = i + 1;

		for (; j < numsSize; j++)
		{
			if (target - nums[i] == nums[j])
			{
				result[0] = i;
				result[1] = j;
				*returnSize = 2;
				return result;
			}
		}
	}
	return (NULL);
}
