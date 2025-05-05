#include <stdio.h>

void twoSum(int *nums, int numsSize, int target, int *returnSize, int *result)
{
    for (int i = 0; i < numsSize; i++)
    {
        for (int j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return;
            }
        }
    }
}

int main()
{
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int result[2];
    int returnSize = 0;

    twoSum(nums, 4, target, &returnSize, result);

    if (returnSize == 2)
    {
        printf("[%d, %d]\n", result[0], result[1]);
    }
    else
    {
        printf("No solution found.\n");
    }

    return 0;
}
